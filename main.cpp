#include <iostream>
#include "Circle.h"

using namespace std;



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
