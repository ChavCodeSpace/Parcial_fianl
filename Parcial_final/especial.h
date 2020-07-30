#ifndef ESPECIAL_H
#define ESPECIAL_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QTimer>
#include <QPainter>
#include "obstaculo.h"

class Especial: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Especial();
    QRectF boundingRect() const; //devuelve el rectangulo que encierra el objeto
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
public slots:
    void caer();
private:
    int ancho = 20;
    int alto = 20;
    QTimer *timer;
};

#endif // ESPECIAL_H
