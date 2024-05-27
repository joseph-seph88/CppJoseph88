#include <iostream>
#include "Shape.h"
#pragma once

class Line : public Shape{
protected:
    virtual void draw();
};