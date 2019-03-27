#ifndef POINT_H
#define POINT_H
#include "QGraphicsScene"
#include "QColor"
#include<QMessageBox>
using namespace Qt;
class Point
{
protected:
    double x,y;
    QGraphicsScene *scene;

public:
    Point(QGraphicsScene *scene, double x, double y) : scene(scene), x(x), y(y){}
    virtual void Draw(double);
    virtual void Remove(double); //удалить
    virtual void Paint(double);
    void Move(double); //передвинуть
    QColor color=black;
    void setcolor(QColor);
    virtual void Area();
};


#endif // POINT_H
