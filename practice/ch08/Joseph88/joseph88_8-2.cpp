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
    string name[5];
public:
    NamedCircle() : Circle(radius) {
        this->name = name;
    }
    void show(){
        for(int i=0; i<5; i++){
            cout<<i+1<<">> "<<getArea()<<" "<<name<<endl;
        }
    }
    void put(string name[]){
        for(int i=0; i<5; i++){
            this->name[i] = name[i];        
        } 
    }
};

int main(){
    NamedCircle pizza[5];
    cout<<"5개의 정수 반지름과 원의 이름을 입력하세요"<<endl;
    cin>>pizza->put(name[]);
    pizza->show();
    cout<<"가장 면적이 큰 피자는 블랙홀 피자입니다."<<endl;

    return 0;
}