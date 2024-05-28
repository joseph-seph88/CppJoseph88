#include <iostream>
using namespace std;

class Circle{
    int radius;
public:
    Circle(int radius = 0) {this->radius = radius;}
    int getRadius() {return radius;}
    void setRadius(int radius) {this->radius = radius;}
    double getArea() {return 3.14*radius*radius;}
};

class NamedCircle : public Circle{
    string name;
    int r;
public:
    NamedCircle() : Circle() {}
    NamedCircle(int radius, string name) : Circle(radius) {
        this->name = name;
        r = radius;
    }
    void show(){
        cout << "반지름이 " << getRadius() << "인 " << name << endl;
    }
    void input(){
        cout<<"5개의 정수 반지름과 원의 이름을 입력하세요"<<endl;
        for(int i=0; i<5; i++){
            cout<<i+1<<">> ";
            cin>>r>>name;
        }
    }
    
};

int main(){
    NamedCircle pizza[5];
    pizza->input();
    for(int i=0; i<5; i++){
        pizza[i].show();
    }
}