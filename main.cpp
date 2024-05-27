#include <iostream>
#include <string>

using namespace std;

class Point
{
private:
    int x, y;

public:
    void set(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void showPoint()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }
};

class ColorPoint : public Point
{
private:
    string color;

public:
    void setColor(string color)
    {
        this->color = color;
    }
    void showColorPoint()
    {
        cout << this->color << ":";
        showPoint();
    }
};

int main()
{
    Point p;
    ColorPoint cp;
    p.set(10, 20);
    cp.set(10, 20);
    p.showPoint();
    cp.setColor("Red");
    cp.showColorPoint();

    ColorPoint *pDer=new ColorPoint();
    Point *pBase, po;
    pBase = &po;
    pDer = (ColorPoint *)pBase; // 잘못된 다운 캐스팅

    pDer->set(3, 4);
    pDer->setColor("Red");

    return 0;
}