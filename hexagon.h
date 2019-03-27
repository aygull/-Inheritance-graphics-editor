#ifndef HEXAGON_H
#define HEXAGON_H
#include"circle.h"
class Hexagon : public Circle
{
protected:
//    QPolygonF ff;
public:
    Hexagon(QGraphicsScene *s , double x, double y, double r) : Circle(s, x, y, r) {}
    void Draw(double) override;
    void Paint(double) override;
    void Area() override;
    void Remove(double) override;
};


#endif // HEXAGON_H

