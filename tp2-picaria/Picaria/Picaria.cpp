#include "Picaria.h"
#include "ui_Picaria.h"

#include <QDebug>
#include <QSignalMapper>
#include <QMessageBox>

Picaria::Picaria(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Picaria) {
    ui->setupUi(this);

    this->adjustSize();
    this->setFixedSize(this->size());

    qDebug() << "row: " << ui->hole00->row();
    qDebug() << "col: " << ui->hole00->col();

    QObject::connect(ui->actionSair, SIGNAL(triggered(bool)), qApp, SLOT(quit()));
    QObject::connect(ui->actionNovo, SIGNAL(triggered(bool)), this, SLOT(reset()));
    QObject::connect(ui->actionAjuda, SIGNAL(triggered(bool)), this, SLOT(showAbout()));

    QSignalMapper* map = new QSignalMapper(this);
    for(int id = 0; id < 9; id++) {
        int r = id / 3;
        int c = id % 3;

        Hole* hole = this->findChild<Hole*>(QString("hole%1%2").arg(r).arg(c));
        Q_ASSERT(hole != 0);

        m_holes[id] = hole;
        map->setMapping(hole, id);
        QObject::connect(hole, SIGNAL(clicked(bool)), map, SLOT(map()));
    }
    QObject::connect(map, SIGNAL(mapped(int)), this, SLOT(play(int)));
}

Picaria::~Picaria() {
    delete ui;
}

void Picaria::play(int id){
    Hole* hole = m_holes[id];

    qDebug() << "row: " << hole->row();
    qDebug() << "col: " << hole->col();
    qDebug() << id;

    hole->setState(Hole::Red);
}

void Picaria::reset(){
    for(int id = 0; id < 9; id++){
        Hole* hole = m_holes[id];
        hole->setState(Hole::Empty);
    }
}

void Picaria::showAbout() {
    QMessageBox::information(this, tr("Sobre"), tr("Picaria\n\nKelly Steffany Silva - kelly.stff@gmail.com"));
}
