#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    int id;
    double weight;
    string name;
public:
    void show();
};

void Person::show() { cout << id << ' ' << weight << ' ' << name << endl; }

int main(int argc, char *argv[])
{
    Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
    grace.show();
    ashley.show();
    helen.show();
    
    return 0;
}