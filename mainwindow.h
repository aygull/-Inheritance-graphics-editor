#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include<QGraphicsItem>

#include <QDebug>
#include <QPen>
#include <QMessageBox>
//#include "point.h"
#include"mygraph.h"
//class MyGraph;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QPen pen;
    QBrush brush;
//    QVector<QSharedPointer<Point>> tmp;

private slots:
    void on_groupBox_clicked();
    void on_radioButton_clicked();
    void on_radioButton_2_clicked();
    void on_radioButton_3_clicked();
    void on_radioButton_4_clicked();
    void on_pushButton_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_spinBox_valueChanged(int arg1);
    void on_spinBox_2_valueChanged(int arg1);
    void on_spinBox_3_valueChanged(int arg1);
    void on_angle_spin_valueChanged(int arg1);
    void on_but_angle_clicked();

    void on_box_for_figures_currentTextChanged(const QString &arg1);

    void on_del_but_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
