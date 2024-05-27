#include "Shape.h"
#include <iostream>

void Shape::paint()
{
    draw();
}

Shape *Shape::add(Shape *p)
{
    this->next=p;
    return p;
}

 void Shape::draw(){
     std::cout<<"Shape::draw()"<<std::endl;
 }