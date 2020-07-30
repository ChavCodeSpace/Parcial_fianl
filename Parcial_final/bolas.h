#ifndef BOLAS_H
#define BOLAS_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QTimer>

class Bolas: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Bolas();

public slots:
    void mover();
};

#endif // BOLAS_H
