#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "mygraph.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QGraphicsScene *scene = new QGraphicsScene(this);
    scene->setSceneRect(0, 0, 300, 300);
    ui->graphicsView->setScene(scene);
    scene->addLine(0, scene->height()/2, scene->width(), scene->height()/2);
    scene->addLine(scene->width()/2, 0, scene->width()/2, scene->height());

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_groupBox_clicked()
{
    qDebug()<<"ghhj";
}

void MainWindow::on_radioButton_clicked()
{
    ui->graphicsView->type_fig = "Point";
}

void MainWindow::on_radioButton_2_clicked()
{
    ui->graphicsView->type_fig = "Circle";
}

void MainWindow::on_radioButton_3_clicked()
{
    ui->graphicsView->type_fig = "Square";
}

void MainWindow::on_radioButton_4_clicked()
{
    ui->graphicsView->type_fig = "Hexagon";
}

void MainWindow::on_pushButton_clicked()
{
   ui->graphicsView->redraw();
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->graphicsView->remove_2();

}

void MainWindow::on_pushButton_4_clicked()
{
    ui->graphicsView->show_square();
}

void MainWindow::on_spinBox_valueChanged(int arg1)
{
    MyGraph hi;
    //hi.val=ui->spinBox->value();
    ui->graphicsView->val=arg1;
    //hi.val=arg1;
    qDebug()<<hi.val;
}

void MainWindow::on_spinBox_2_valueChanged(int arg1)
{
    ui->graphicsView->val2=arg1;
}



void MainWindow::on_spinBox_3_valueChanged(int arg1)
{
    ui->graphicsView->val_square=arg1;

}

void MainWindow::on_angle_spin_valueChanged(int arg1)
{
    ui->graphicsView->val_angle=arg1;
}

void MainWindow::on_but_angle_clicked()
{
    ui->graphicsView->turn();
}

void MainWindow::on_box_for_figures_currentTextChanged(const QString &arg1)
{

}

void MainWindow::on_del_but_clicked()
{
    ui->graphicsView->delete_fig();
}
