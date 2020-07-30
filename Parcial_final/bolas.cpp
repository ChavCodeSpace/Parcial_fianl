#include "bolas.h"
#include <QDebug>



Bolas::Bolas(double px, double py)
{    
    posx = px;
    posy = py;
    vel = 60.0;
    ang = 3.14;

    setRect(posx,posy,15,15);


    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(20);
}

void Bolas::move()
{
    vel_x=vel*cos(ang);
    vel_y=vel*sin(ang)-g*delta;
    ang=atan2(vel_y,vel_x);
    vel= sqrt(vel_x*vel_x+ vel_y*vel_y);
    posx=posx+vel_x*delta;
    posy=posy+vel_y*delta-(0.5*g*delta*delta);
    setPos(posx,-posy);

    QList <QGraphicsItem *> colliding_items = collidingItems();
    for (int i=0, n=colliding_items.size(); i < n; i++){
        if (typeid (*(colliding_items[i])) == typeid (Obstaculo)){
            vel_y = -vel_y;
            posx=posx+vel_x*delta;
            posy=posy+vel_y*delta-(0.5*g*delta*delta);
            setPos(posx,-posy);
        }
    }
    if (pos().y() > 400.0){
        scene()->removeItem(this);
        delete this;
        qDebug() <<"elimino bola";
    }
}
