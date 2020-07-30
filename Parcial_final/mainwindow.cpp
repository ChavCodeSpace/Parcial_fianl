#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //scene
    scene = new QGraphicsScene(15,61,640,360);
    ui->View->setScene(scene);

    //Desactiva scrollbars
    ui->View->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->View->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //linea superior
    l1 = new QGraphicsLineItem(15,65,650,65);
    scene->addItem(l1);
    //linea izquierda
    l2 = new QGraphicsLineItem(15,65,15,410);
    scene->addItem(l2);
    //linea inferior
    l3 = new QGraphicsLineItem(15,410,650,410);
    scene->addItem(l3);
    //linea derecha
    l4 = new QGraphicsLineItem(650,65,650,410);
    scene->addItem(l4);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_b_ob_especial_clicked()
{

}

void MainWindow::on_iniciar_clicked()
{

}
