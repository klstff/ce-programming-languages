#include "Picaria.h"
#include "ui_Picaria.h"

#include <QDebug>
#include <QSignalMapper>
#include <QMessageBox>
#include <QActionGroup>


Picaria::Player state2player(Hole::State state) {
    switch (state) {
    case Hole::RedState:
        return Picaria::RedPlayer;
    case Hole::BlueState:
        return Picaria::BluePlayer;
    default:
        Q_UNREACHABLE();
    }
}

Hole::State player2state(Picaria::Player player) {
    return player == Picaria::RedPlayer ? Hole::RedState : Hole::BlueState;
}

Picaria::Picaria(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::Picaria),
      m_mode(Picaria::NineHoles),
      m_player(Picaria::RedPlayer),
      m_phase(Picaria::DropPhase) {

    ui->setupUi(this);

    QActionGroup* gameModes = new QActionGroup(this);
    gameModes->setExclusive(true);
    gameModes->addAction(ui->action9holes);
    gameModes->addAction(ui->action13holes);

    QObject::connect(ui->actionNew, SIGNAL(triggered(bool)), this, SLOT(reset()));
    QObject::connect(ui->actionQuit, SIGNAL(triggered(bool)), qApp, SLOT(quit()));
    QObject::connect(ui->actionAbout, SIGNAL(triggered(bool)), this, SLOT(showAbout()));
    QObject::connect(this, SIGNAL(gameMode(Picaria::Mode)), this, SLOT(reset()));
    QObject::connect(this, SIGNAL(gameOver(Picaria::Player)), this, SLOT(showGameOver()));
    QObject::connect(gameModes, SIGNAL(triggered(QAction*)), this, SLOT(updateMode(QAction*)));
    QObject::connect(gameModes, SIGNAL(triggered(QAction*)), this, SLOT(setHoleNeighbors()));
 
    QSignalMapper* map = new QSignalMapper(this);
    for (int id = 0; id < 13; ++id) {
        Hole* hole = this->findChild<Hole*>(QString("hole%1").arg(id+1, 2, 10, QChar('0')));
        Q_ASSERT(hole != nullptr);

        m_holes[id] = hole;
        map->setMapping(hole, id);
        QObject::connect(hole, SIGNAL(clicked(bool)), map, SLOT(map()));
    }


#if QT_VERSION < QT_VERSION_CHECK(6,0,0)
    QObject::connect(map, SIGNAL(mapped(int)), this, SLOT(play(int)));
#else
    QObject::connect(map, SIGNAL(mappedInt(int)), this, SLOT(play(int)));
#endif

    this->reset();
    Hole::setNeighbors(this->m_holes, 9);
    this->previousHole = nullptr;

    this->updateStatusBar();
    this->adjustSize();
    this->setFixedSize(this->size());
}

Picaria::~Picaria() {
    delete ui;
}

void Picaria::setMode(Picaria::Mode mode) {
    if (m_mode != mode) { m_mode = mode; }
    emit gameMode(mode);
}

void Picaria::setHoleNeighbors(){
    this->mode() == Picaria::NineHoles ? Hole::setNeighbors(this->m_holes, 9) : Hole::setNeighbors(this->m_holes, 13);
}

void Picaria::switchPlayer() {
    m_player = m_player == Picaria::RedPlayer ? Picaria::BluePlayer : Picaria::RedPlayer;
    this->updateStatusBar();
}

void Picaria::play(int id) {
    Hole* hole = m_holes[id];

    if(this->m_phase == Picaria::DropPhase){
        this->drop(hole);
    } else if(this->m_phase == Picaria::MovePhase) {
        this->move(hole);
    }
    this->updateStatusBar();
}

void Picaria::drop(Hole* hole) {
    if (hole->state() == Hole::EmptyState) {
        hole->setState(player2state(m_player));

        if (this->isGameOver())
            emit gameOver(this->m_player);
        else {
            ++m_dropCount;
            if (m_dropCount == 6)
                m_phase = Picaria::MovePhase;

            this->switchPlayer();
        }
    }
}

void Picaria::move(Hole* hole){
    if(hole->state() == player2state(this->m_player)){
        previousHole = hole;
        this->findSelectable(hole);
    }
    if(hole->state() == Hole::SelectableState){
        hole->setState((player2state(this->m_player)));
        previousHole->setState(Hole::EmptyState);
        previousHole = nullptr;
        this->clearSelectables();
        this->isGameOver() ? emit gameOver(this->m_player) : this->switchPlayer();
    }
}

void Picaria::findSelectable(Hole* hole){
    this->clearSelectables();

    Hole* neighboors[8] = {hole->up, hole->bottom, hole->right, hole->left, hole->up_right, hole->up_left, hole->bottom_right, hole->bottom_left};

    for(int i = 0; i < 8; i++){
        if(neighboors[i] != nullptr){
            if (neighboors[i]->state() == Hole::EmptyState)
                neighboors[i]->setState(Hole::SelectableState);
        }
    }
}

void Picaria::clearSelectables(){
    for (int id = 0; id < 13; id++) {
        Hole* hole = m_holes[id];
        if (hole->state() == Hole::SelectableState)
            hole->setState(Hole::EmptyState);
    }
}

bool Picaria::isGameOver(){
    for(int id = 0; id < 13; id++){
        Hole* neighboors[8] = {m_holes[id]->up, m_holes[id]->bottom, m_holes[id]->right, m_holes[id]->left, m_holes[id]->up_right, m_holes[id]->bottom_left, m_holes[id]->up_left, m_holes[id]->bottom_right};
        
        for(int i = 0; i < 8; i+=2){
            if(m_holes[id]->state() == player2state(m_player)){
                if(neighboors[i] != nullptr && neighboors[i+1] != nullptr){
                    if(neighboors[i]->state() == player2state(m_player) && neighboors[i+1]->state() == player2state(m_player))
                        return true;
                }
            }  
        }
    }
    return false;
}

void Picaria::reset() {
    for (int id = 0; id < 13; ++id) {
        Hole* hole = m_holes[id];
        hole->reset();
        if(id == 3 || id == 4 || id == 8 || id == 9) { hole->setVisible(m_mode == Picaria::ThirteenHoles); }
    }

    m_player = Picaria::RedPlayer;
    m_phase = Picaria::DropPhase;
    m_dropCount = 0;   

    this->updateStatusBar();
}

void Picaria::showGameOver() {
    if(m_player == Picaria::RedPlayer)
        QMessageBox::information(this, tr("Vencedor"), tr("Parabéns, o jogador vermelho venceu."));
    else if(m_player == Picaria::BluePlayer)
        QMessageBox::information(this, tr("Vencedor"), tr("Parabéns, o jogador azul venceu."));
    this->reset();
}

void Picaria::showAbout() {
    QMessageBox::information(this, tr("Sobre"), tr("Picaria\n\nKelly Steffany Silva - kelly.stff@gmail.com"));
}

void Picaria::updateMode(QAction* action) {
    if (action == ui->action9holes)
        this->setMode(Picaria::NineHoles);
    else if (action == ui->action13holes)
        this->setMode(Picaria::ThirteenHoles);
    else
        Q_UNREACHABLE();
}

void Picaria::updateStatusBar() {
    QString player(m_player == Picaria::RedPlayer ? "vermelho" : "azul");
    QString phase(m_phase == Picaria::DropPhase ? "colocar" : "mover");

    ui->statusbar->showMessage(tr("Fase de %1: vez do jogador %2").arg(phase).arg(player));
}
