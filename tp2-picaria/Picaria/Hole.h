#ifndef HOLE_H
#define HOLE_H

#include <QObject>
#include <QPushButton>

class Hole : public QPushButton {
    Q_OBJECT
    Q_PROPERTY(State state READ state WRITE setState NOTIFY updateState)

public:
    enum State {
        EmptyState,
        RedState,
        BlueState,
        SelectableState
    };
    Q_ENUM(State)

    int id;
    Hole *left, *up, *bottom, *right, *up_left, *up_right, *bottom_right, *bottom_left;

    explicit Hole(QWidget *parent = nullptr);
    virtual ~Hole();

    State state() const { return m_state; }
    void setState(State State);   
    static void setNeighbors(Hole* hole[], int gameMode);

public slots:
    void reset();

signals:
    void updateState(State State);

private:
    State m_state;

    static QPixmap stateToPixmap(State state);

private slots:
    void updateHoleIcon(State state);

};

#endif // HOLE_H
