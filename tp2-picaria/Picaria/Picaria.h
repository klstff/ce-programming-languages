#ifndef PICARIA_H
#define PICARIA_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Picaria; }
QT_END_NAMESPACE

class Hole;

class Picaria : public QMainWindow{
    Q_OBJECT

public:
    Picaria(QWidget *parent = nullptr);
    ~Picaria();

private:
    Ui::Picaria *ui;
    Hole* m_holes[9];

private slots:
    void play(int id);
    void reset();
    void showAbout();
};
#endif // PICARIA_H
