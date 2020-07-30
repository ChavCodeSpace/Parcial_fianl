#include "especial.h"

Especial::Especial()
{
    setRect(0,0,20,20);

    int random_number = (rand() % 600) + 100;
    setPos(random_number,0);

    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(caer()));

    timer->start(50);
}

void Especial::caer()
{
    setPos(x(),y()+5);
}
