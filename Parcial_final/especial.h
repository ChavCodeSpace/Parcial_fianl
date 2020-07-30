#ifndef ESPECIAL_H
#define ESPECIAL_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QTimer>

class Especial: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Especial();
public slots:
    void caer();
private:
    QTimer *timer;
};

#endif // ESPECIAL_H
