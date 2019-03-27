#include "hexagon.h"
#include<QGraphicsItem>
void Hexagon::Draw(double val) {
    Remove(val);
    QGraphicsItem *hex;
    QPolygonF ff;
    ff<<QPointF(x, y+r)<< QPointF(x -((sqrt(3)*r)/2),y+0.5*r)<<QPointF(x -((sqrt(3)*r)/2),y -0.5*r)<<QPointF(x, y-r)<<QPointF(x +((sqrt(3)*r)/2),y-0.5*r)<<QPointF(x +((sqrt(3)*r)/2),y+0.5*r);
    hex=scene->addPolygon(ff);
    hex->setTransformOriginPoint(x + r/2,y + r/2);
    hex->setRotation(val);
}
void Hexagon::Paint(double val) {
    QPolygonF ff;
    QGraphicsItem *hex;
    QColor color = QColorDialog::getColor();
    if (color.isValid() ) {
        ff<<QPointF(x, y+r)<< QPointF(x -((sqrt(3)*r)/2),y+0.5*r)<<QPointF(x -((sqrt(3)*r)/2),y -0.5*r)<<QPointF(x, y-r)<<QPointF(x +((sqrt(3)*r)/2),y-0.5*r)<<QPointF(x +((sqrt(3)*r)/2),y+0.5*r);
        hex=scene->addPolygon(ff,QPen(color), QBrush(color));
        hex->setTransformOriginPoint(x + r/2,y + r/2);
        hex->setRotation(val);
    }
}

void Hexagon::Area(){
    double xx = 3*sqrt(3)/2*r*r;
    QMessageBox msg;
    msg.setText("Площадь шестиугольника равна "+QString::number(xx));
    msg.exec();
}

void Hexagon::Remove(double val){
    QPolygonF ff;
    QGraphicsItem *hex;
    ff<<QPointF(x, y+r)<< QPointF(x -((sqrt(3)*r)/2),y+0.5*r)<<QPointF(x -((sqrt(3)*r)/2),y -0.5*r)<<QPointF(x, y-r)<<QPointF(x +((sqrt(3)*r)/2),y-0.5*r)<<QPointF(x +((sqrt(3)*r)/2),y+0.5*r);
    hex=scene->addPolygon(ff,QPen(white), QBrush(white));
    hex->setTransformOriginPoint(x + r/2,y + r/2);
    hex->setRotation(val);
//    hex->setVisible(false);
}

