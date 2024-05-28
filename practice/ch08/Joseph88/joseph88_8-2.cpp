#include <iostream>
#include <string>
using namespace std;

class Circle {
    int radius;
public:
    Circle(int radius = 0) { this->radius = radius; }
    int getRadius() { return radius; }
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14 * radius * radius; }
};

<<<<<<< HEAD
class NamedCircle : public Circle {
    string name;
    int radius;
public:
    NamedCircle(int radius, string name) : Circle(radius), name(name) {}
    NamedCircle() : Circle() {}
    void show() {
        cout << "가장 면적이 큰 피자는 " << name << "입니다." << endl;
    }
    void input(int index) {
        cout<<index<<">> ";
        cin>>radius>>name;
        setRadius(radius);  
    }
    int calculNumber(NamedCircle pizza[]){
        double maxArea = 0;
        int maxIndex = 0;
        for (int i = 0; i < 5; i++) {
            double area = pizza[i].getArea();
            if (area > maxArea) {
                maxArea = area;
                maxIndex = i;
            }
        }
        return maxIndex;
    }
=======
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
    
>>>>>>> a769c5f55ef0215312157d11ec120d3142cedf3b
};

int main() {
    NamedCircle pizza[5];
<<<<<<< HEAD
    cout << "5개의 정수 반지름과 피자의 이름을 입력하세요." << endl;
    
    for (int i = 0; i < 5; i++) {
        pizza[i].input(i+1);
    }
    int maxIndex = pizza->calculNumber(pizza);
    pizza[maxIndex].show();

    return 0;
}
=======
    pizza->input();
    for(int i=0; i<5; i++){
        pizza[i].show();
    }
}
>>>>>>> a769c5f55ef0215312157d11ec120d3142cedf3b
