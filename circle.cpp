#include "circle.h"
#include<QMessageBox>

void Circle::Draw(double u) {
    scene->addEllipse(x-r,y-r,2*r,2*r, QPen(black), QBrush(white));
}
void Circle::Paint(double  val){
    QColor color = QColorDialog::getColor();
    if (color.isValid() ) {
        scene->addEllipse(x-r,y-r,2*r,2*r, QPen(color), QBrush(color));
    }
}

void Circle::Area(){
    double xx = 3.14*r*r;
    QMessageBox msg;
    msg.setText("Площадь круга равна "+QString::number(xx));
    msg.exec();
}

void Circle::Remove(double val){
     scene->addEllipse(x-r,y-r,2*r,2*r, QPen(white), QBrush(white));
}

