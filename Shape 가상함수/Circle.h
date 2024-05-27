#pragma once
#include "Shape.h"
#include <iostream>

class Circle:public Shape{
protected:
    virtual void draw();
};