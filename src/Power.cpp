#include "Power.h"
#include <iostream>
using namespace std;
Power& Power::operator()(int power){
    this->kick *= power;
    this->punch *= power;
    return *this;
}

Power &Power::operator<<(int power)
{
    this->kick += power;
    this->punch += power;
    return *this;
}

Power::Power(int punch, int kick)
{
    this->punch = punch;
    this->kick = kick;
}

Power::~Power()
{
}

void Power::show()
{
    cout << "punch = " << punch << ", kick = " << kick << endl;
}

int Power::getPunch()
{
    return this->punch;
}

int Power::getKick()
{
    return this->kick;
}

Power Power::pow(Power &another)
{
    Power theother;
    theother.kick = this->kick + another.kick;
    theother.punch = this->punch + another.punch;
    return theother;
}

Power Power::operator+(Power &another)
{
    return pow(another);
}

bool Power::operator==(Power &another)
{
    if (this->kick == another.kick && this->punch == another.punch)
        return true;
    else
        return false;
}

Power &Power::operator+=(Power &another)
{
    this->kick += another.kick;
    this->punch += another.punch;
    return *this;
}

Power &Power::operator++()
{
    this->kick++;
    this->punch++;
    return *this;
}

Power &Power::operator++(int)
{
    this->kick++;
    this->punch++;
    return *this;
}