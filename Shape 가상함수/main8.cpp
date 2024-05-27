#include <iostream>
#include "Circle.h"
#include "Rect.h"
#include "Line.h"
using namespace std;

int main()
{
    Shape* pStart;
    Shape* pEnd;

    pStart = new Circle();
    pEnd = pStart;

    pEnd = pEnd->add(new Rect());
    pEnd = pEnd->add(new Circle());
    pEnd = pEnd->add(new Line());
    
    Shape* p = pStart;
    while(p!=nullptr){
        p->paint();
        p = p->getNext();
    }

    p=pStart;
    while(p!=nullptr){
        Shape* temp=p->getNext();
        delete p;
        p = temp;
    }



    return 0;
}