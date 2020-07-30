#ifndef BOLAS_H
#define BOLAS_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QTimer>
#include <math.h>
#include <QPainter>
#include "obstaculo.h"
#include "mainwindow.h"

class Bolas: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Bolas(double px, double py);

public slots:
    void move();


private:
    QTimer *timer;
    double g= 9.8;
    double delta =0.1;
    double posy,posx, ang, vel, vel_x, vel_y;
};

#endif // BOLAS_H
