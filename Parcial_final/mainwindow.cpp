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

    ui->View->show();

    //linea superior
    l1 = new QGraphicsLineItem(15,65,650,65);
    //linea izquierda
    l2 = new QGraphicsLineItem(15,65,15,410);
    //linea inferior
    l3 = new QGraphicsLineItem(15,410,650,410);
    //linea derecha
    l4 = new QGraphicsLineItem(650,65,650,410);


    //Timer
    timer = new QTimer;
    connect(timer,SIGNAL(timeout()),this,SLOT(spawn()));


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
    scene->addItem(l1);
    scene->addItem(l2);
    scene->addItem(l3);
    scene->addItem(l4);


    timer->start(3000);
}

void MainWindow::spawn()
{
//    int random_x = rand() % 640 + 20;
//    int random_y = rand() % 100 + 65;
//    b = new Bolas(random_x,random_y);
//    b->setPos(random_x,random_y);
//    scene->addItem(b);


}
