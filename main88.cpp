#include <iostream>
#include <string>
using namespace std;

class Point{
private:
    int x, y;

public:
    void set(int x, int y){
        this->x = x;
        this->y = y;
    }
    void showPoint(){
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

// Point 클래스 상속
class ColorPoint : public Point{
private:
    string color;
public:
    void setColor(string color){
        this->color = color;
    }
    void showColorPoint(){
        cout << this->color << ": ";
        showPoint();
    }
};

int main(){
    Point p;
    ColorPoint cp;
    p.set(10, 20);
    cp.set(10, 20);
    p.showPoint();
    cp.setColor("Red");
    cp.showColorPoint();

    return 0;    
}
