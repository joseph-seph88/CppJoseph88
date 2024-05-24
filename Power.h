#include <gtest/gtest.h>
#include <string>
#include <iostream>
using namespace std;

class Power
{
private:
    int punch;
    int kick;

public:
    Power(int punch = 0, int kick = 0);
    ~Power();
    void show();
    Power pow(Power &another);
    Power operator+(Power &another);
    bool operator==(Power &another);
    Power& operator+=(Power &another);
    Power& operator++();
    Power& operator++(int);
    Power& operator()(int power);
    Power& operator<<(int power);
};