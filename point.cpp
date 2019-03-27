#pragma once
#include "point.h"
#include<QColorDialog>
#include"QMessageBox"
using namespace Qt;

void Point::Draw(double u){
    scene->addEllipse(x,y,1,1, QPen(), QBrush(SolidPattern));
}

void Point::Paint(double val){
    QColor color = QColorDialog::getColor();
    if (color.isValid() ) {
        scene->addEllipse(x,y,1,1, QPen(color), QBrush(color));
    }
}

void Point::Move(double val){
    double x;
    x=0;
    Remove(0);
    x = x + val;
    y = y + val;
    Draw(0);
}

void Point::setcolor(QColor  color){
    this->color=color;
}

void Point::Remove(double val){
    scene->addEllipse(x,y,1,1, QPen(white), QBrush(white));
}

void Point::Area(){
    QMessageBox msg;
    msg.setText("Площадь точки равна 1");
    msg.exec();
}
