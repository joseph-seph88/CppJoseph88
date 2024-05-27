#include "Shape.h"
#include <iostream>
using namespace std;

Shape* Shape::add(Shape* p){
    this->next = p;
    return p;
}

void Shape::draw(){
    cout<<"Shape"<<endl;
}

void Shape::paint(){
    this->draw();
    return draw();
}
