#include <iostream>

using namespace std;

class Circle
{
private:
    int radius;

public:
    Circle();
    Circle(int r);
    int getRadius();
    double getArea();
};

Circle::Circle()
{
    radius = 1;
}

Circle::Circle(int r)
{
    radius = r;
}

int Circle::getRadius()
{
    return radius;
}

double Circle::getArea()
{
    return 3.14 * radius * radius;
}

int main(int argc, char const *argv[])
{
    Circle donut;
    Circle pizza(30);
    cout << donut.getArea() << endl;
    cout << pizza.getArea() << endl;

    return 0;
}





// #include <iostream>

// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int width;
//     int height;

//     cout << "너비를 입력하세요 : " << endl;
//     cin >> width;

//     cout << "높이를 입력하세요 : " << endl;
//     cin >> height;

//     cout << "면적 : " << width * height << endl;

//     return 0;
// }
