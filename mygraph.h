#ifndef MYGRAPH_H
#define MYGRAPH_H
//#include"circle.cpp"
#include <QGraphicsView>
#include <QMouseEvent>
#include<QPointF>
#include <QMessageBox>
#include<QVector>
#include<QSharedPointer>
#include"square.h"
#include"hexagon.h"
//#include "point.h"
using namespace std;
class MyGraph : public QGraphicsView
{
public:
    explicit MyGraph(QWidget *parent = 0);
    QPointF last;
    QString type_fig = "", last_fig="";
    virtual void mousePressEvent(QMouseEvent*);
    void redraw();//перекрасить
    void remove_2();//передвинуть
    void show_square();// площадь
    void turn();//повернуть
    void delete_fig();
    int val, val2, val_square, val_angle;
    QColor color2;
    QVector<QSharedPointer<Point>> tmp;
};

#endif // MYGRAPH_H
