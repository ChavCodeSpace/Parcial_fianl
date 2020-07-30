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


    //Timers
    timer_bolas = new QTimer();
    connect(timer_bolas,SIGNAL(timeout()),this,SLOT(spawn_bolas()));

    timer_especial = new QTimer();
    connect(timer_especial,SIGNAL(timeout()),this,SLOT(spawn_especial()));

    timer_obstaculos = new QTimer();
    connect(timer_obstaculos,SIGNAL(timeout()),this,SLOT(spawn_obstaculos()));
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


    timer_bolas->start(2000);
    timer_especial->start(1000);
    timer_obstaculos->start(1000);
}

void MainWindow::spawn_bolas()
{
    int random_x = rand() % 640 + 20;
    int random_y = rand() % 100 + 65;
    b = new Bolas();
    b->setPos(random_x,random_y);
    scene->addItem(b);


}

void MainWindow::spawn_obstaculos()
{
    int random_x = rand() % 640 + 20;
    int random_y = rand() % 300 + 200;
    o = new Obstaculo();
    o->setPos(random_x, random_y);
    scene->addItem(o);
}

void MainWindow::spawn_especial()
{
    int random_x = rand() % 640 + 20;
    e = new Especial();
    e->setPos(random_x,0);
    scene->addItem(e);
}
