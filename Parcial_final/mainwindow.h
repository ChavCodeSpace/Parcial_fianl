#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsLineItem>
#include <QTimer>
#include <QList>
#include "bolas.h"
#include "obstaculo.h"
#include "especial.h"

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

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;

    QGraphicsLineItem *l1;
    QGraphicsLineItem *l2;
    QGraphicsLineItem *l3;
    QGraphicsLineItem *l4;

    QTimer *timer_bolas;
    QTimer *timer_obstaculos;
    QTimer *timer_especial;
    Bolas *b;
    Obstaculo *o;
    Especial *e;
};
#endif // MAINWINDOW_H
