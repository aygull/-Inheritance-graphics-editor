#include "square.h"
#include<QGraphicsRectItem>
void Square::Draw(double zx){
    QGraphicsRectItem* item ;
    item=scene->addRect(x,y,r,r,  QPen(), QBrush());
    item->setTransformOriginPoint(x + r/2,y + r/2);
    item->setRotation(zx);
}

void Square::Paint(double val){
    QColor color = QColorDialog::getColor();
    if (color.isValid() ) {
    scene->addRect(x,y,r,r,  QPen(color), QBrush(color));
    }
}

void Square::Area(){
    double xx = r*r;
    QMessageBox msg;
    msg.setText("Площадь квадрата равна "+QString::number(xx));
    msg.exec();
}

void Square::Remove(double val){
    QGraphicsRectItem* item ;
    item=scene->addRect(x,y,r,r,  QPen(white), QBrush(white));
    item->setTransformOriginPoint(x + r/2,y + r/2);
    item->setRotation(val);
}




