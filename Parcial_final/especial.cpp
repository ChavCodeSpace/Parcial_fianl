#include "especial.h"

Especial::Especial()
{
    int random_number = (rand() % 600) + 100;
    setPos(random_number,0);

    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(caer()));

    timer->start(50);
}

QRectF Especial::boundingRect() const
{
    return QRectF(0,0,ancho,alto);
}

void Especial::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::red);
    painter->drawEllipse(boundingRect());
}

void Especial::caer()
{
    setPos(x(),y()+5);
    QList <QGraphicsItem *> colliding_items = collidingItems();
    for (int i=0, n=colliding_items.size(); i < n; i++){
        if (typeid (*(colliding_items[i])) == typeid (Obstaculo)){
            ancho--;
            alto--;
            this->boundingRect();
        }
    }
}
