#ifndef BOLAS_H
#define BOLAS_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QTimer>
#include <math.h>

class Bolas: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Bolas();

    void ActualizarPosicion();
    void ActualizarVelocidad();

private:
    QTimer *timer;
    double g= 9.8;
    double delta =0.1;
    double posy,posx, ang, vel, vel_x, vel_y;
    int r;
};

#endif // BOLAS_H
