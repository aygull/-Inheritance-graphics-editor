#include "mygraph.h"
#include <QDebug>
#include<QColorDialog>
MyGraph::MyGraph(QWidget *parent) : QGraphicsView(parent)
{
}

void MyGraph::mousePressEvent(QMouseEvent *event)
{
    QPointF clickPoint = mapToScene(event->pos());
    QGraphicsScene *curScene = this->scene();
    if (type_fig == "Point") {
        Point *curPoint = new Point(curScene, clickPoint.x(), clickPoint.y());
        curPoint->color=color2;
        curPoint->Draw(val_angle);
        QSharedPointer<Point> p(curPoint);
        tmp.push_back(p);
    }
    else if (type_fig == "Circle") {
        Point *curCircle = new Circle(curScene, clickPoint.x(), clickPoint.y(), val);
        curCircle->color=color2;
        curCircle->Draw(val_angle);
        QSharedPointer<Point> p(curCircle);
        tmp.push_back(p);
    }
    else if(type_fig=="Square"){
        Point *new_square = new Square(curScene, clickPoint.x(), clickPoint.y(), val_square);
        new_square->color=color2;
        new_square->Draw(val_angle);
        QSharedPointer<Point> p(new_square);
        tmp.push_back(p);
    }
    else if(type_fig=="Hexagon"){
        Point *new_hex = new Hexagon(curScene, clickPoint.x(), clickPoint.y(), val_square);
        new_hex->color=color2;
        new_hex->Draw(val_angle);
        QSharedPointer<Point> p(new_hex);
        tmp.push_back(p);
    }

    last=clickPoint;
    last_fig=type_fig;
}

void MyGraph::redraw(){
    auto it = tmp.end();
    it--;
    it->data()->Paint(val_angle);
}

void MyGraph::remove_2(){
    auto it = tmp.end();
    it--;
    it->data()->Move(val2);
}

void MyGraph::show_square() {
    auto it = tmp.end();
    it--;
    it->data()->Area();
}

void MyGraph::turn() {
    auto it = tmp.end();
    it--;
    it->data()->Draw(val_angle);
}

void MyGraph::delete_fig(){
    if (tmp.end()!=tmp.begin()){
        auto it = tmp.end();
        it--;
        it->data()->Remove(val_angle);
        tmp.erase(it);
        repaint();
    }

}
