#ifndef OBSTACULO_H
#define OBSTACULO_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QTimer>

class Obstaculo: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Obstaculo();

};

#endif // OBSTACULO_H
