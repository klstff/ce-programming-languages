#include "Hole.h"

Hole::Hole(QWidget *parent)
    : QPushButton(parent),
      m_state(Hole::EmptyState) {
    this->updateHoleIcon(m_state);

    QObject::connect(this, SIGNAL(updateState(State)), this, SLOT(updateHoleIcon(State)));
}

Hole::~Hole() {
}

void Hole::setState(State state) {
    if (m_state != state) {
        m_state = state;
        emit updateState(state);
    }
}

void Hole::reset() {
    m_state = Hole::EmptyState;
    this->updateHoleIcon(m_state);
}

void Hole::setNeighbors(Hole* hole[], int gameMode){
    //                       Up       Bottom    Right     Left  
    Hole* holes[13][4]  =  {{nullptr, hole[5],  hole[1],  nullptr},
                            {nullptr, hole[6],  hole[2],  hole[0]},
                            {nullptr, hole[7],  nullptr,  hole[1]},
                            {nullptr, nullptr,  nullptr,  nullptr},
                            {nullptr, nullptr,  nullptr,  nullptr},
                            {hole[0], hole[10], hole[6],  nullptr},
                            {hole[1], hole[11], hole[7],  hole[5]},
                            {hole[2], hole[12], nullptr,  hole[6]},
                            {nullptr, nullptr,  nullptr,  nullptr},
                            {nullptr, nullptr,  nullptr,  nullptr},
                            {hole[5], nullptr,  hole[11], nullptr},
                            {hole[6], nullptr,  hole[12], hole[10]},
                            {hole[7], nullptr,  nullptr,  hole[11]}};

    //                      up_right  up_left  bottom_r  bottom_l  
    Hole* holes9[13][4]  = {{nullptr, nullptr, hole[6],  nullptr},
                            {nullptr, nullptr, hole[7],  hole[5]},
                            {nullptr, nullptr, nullptr,  hole[6]},
                            {nullptr, nullptr, nullptr,  nullptr},
                            {nullptr, nullptr, nullptr,  nullptr},
                            {hole[1], nullptr, hole[11], nullptr},
                            {hole[2], hole[0], hole[12], hole[10]},
                            {nullptr, hole[1], nullptr,  hole[11]},
                            {nullptr, nullptr, nullptr,  nullptr},
                            {nullptr, nullptr, nullptr,  nullptr},
                            {hole[6], nullptr, nullptr,  nullptr},
                            {hole[7], hole[5], nullptr,  nullptr},
                            {nullptr, hole[6], nullptr,  nullptr}};

    //                      up_right  up_left  bottom_r  bottom_l  
    Hole* holes13[13][4] = {{nullptr, nullptr, hole[3],  nullptr},
                            {nullptr, nullptr, hole[4],  hole[3]},
                            {nullptr, nullptr, nullptr,  hole[4]},
                            {hole[1], hole[0], hole[6],  hole[5]},
                            {hole[2], hole[1], hole[7],  hole[6]},
                            {hole[3], nullptr, hole[8],  nullptr},
                            {hole[4], hole[3], hole[9],  hole[8]},
                            {nullptr, hole[4], nullptr,  hole[9]},
                            {hole[6], hole[5], hole[11], hole[10]},
                            {hole[7], hole[6], hole[12], hole[11]},
                            {hole[8], nullptr, nullptr,  nullptr},
                            {hole[9], hole[8], nullptr,  nullptr},
                            {nullptr, hole[9], nullptr,  nullptr}};

    for(int id = 0; id < 13; id++){
        hole[id]->up = holes[id][0];
        hole[id]->bottom = holes[id][1];
        hole[id]->right = holes[id][2];
        hole[id]->left = holes[id][3];
    }
    for(int id = 0; id < 13; id++){
        if(gameMode == 9){
            hole[id]->up_right = holes9[id][0];
            hole[id]->up_left = holes9[id][1];
            hole[id]->bottom_right = holes9[id][2];
            hole[id]->bottom_left = holes9[id][3];
        } else {
            hole[id]->up_right = holes13[id][0];
            hole[id]->up_left = holes13[id][1];
            hole[id]->bottom_right = holes13[id][2];
            hole[id]->bottom_left = holes13[id][3];
        }
    }
}

QPixmap Hole::stateToPixmap(State state) {
    switch (state) {
    case Hole::EmptyState:
        return QPixmap(":empty");
    case Hole::RedState:
        return QPixmap(":red");
    case Hole::BlueState:
        return QPixmap(":blue");
    case Hole::SelectableState:
        return QPixmap(":selectable");
    default:
        return QPixmap();
    }
}

void Hole::updateHoleIcon(State state) {
    this->setIcon(Hole::stateToPixmap(state));
}
