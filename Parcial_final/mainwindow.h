#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsLineItem>
#include <QTimer>
#include <QList>
#include <QObject>
#include "obstaculo.h"
#include "especial.h"

class Bolas;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_b_ob_especial_clicked();
    void on_iniciar_clicked();

public slots:
    void spawn_bolas();
    void spawn_obstaculos();
    void spawn_especial();
    void move();
    void erase();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;

    QGraphicsLineItem *l1;
    QGraphicsLineItem *l2;
    QGraphicsLineItem *l3;
    QGraphicsLineItem *l4;

    QTimer *timer;
    QTimer *timer_bolas;
    QTimer *timer_obstaculos;
    QTimer *timer_especial;
    Bolas *b;
    Obstaculo *o;
    Especial *e;

    //QList<Bolas *> lista_bolas;
    QList<Obstaculo *> lista_obstaculos;
};
#endif // MAINWINDOW_H
