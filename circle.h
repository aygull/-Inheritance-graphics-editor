#ifndef CIRCLE_H
#define CIRCLE_H
#include"point.h"
#include<QColorDialog>
using namespace Qt;
class Circle : public Point
{
protected:
    double r;
public:
    Circle(QGraphicsScene *s , double x, double y, double r) : Point(s, x, y), r(r){}
    virtual void Draw(double) override;
    virtual void Paint(double) override;
    virtual void Area() override;
    virtual void Remove(double) override;
};

#endif // CIRCLE_H
