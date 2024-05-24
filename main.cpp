#include <iostream>
#include <string>

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
    // TODO: 여기에 return 문을 삽입합니다.
}

int main(int argc, char const *argv[])
{
    Power p1(3, 5);
    Power p2(4, 6);
    Power p3 = p1 + p2;
    p3.show();
    if(p1==p2)
        cout<<"p1 == p2"<<endl;
    else
        cout<<"p1 != p2"<<endl;

    p1+=p2;
    p1.show();

    p1(2);
    p1.show();

    p1<<3<<4<<5;
    p1.show();

    

    return 0;
}
