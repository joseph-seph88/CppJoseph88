#include <iostream>
using namespace std;

class Compare{
    int x, y, z;
public:
    Compare(){ x = 0; y = 0; z = 0;}
    int big(int a, int b, int c = 100);
};

int Compare::big(int a, int b, int c){
    if(a>=c || b>=c) return c; 
    else if(a > b) return a;
    else if(a < b) return b;
    else return 0;
}

int main(){
    Compare comp;
    int x = comp.big(3,5);
    int y = comp.big(300, 60);
    int z = comp.big(30, 60, 50);
    cout<<x<<' '<<y<<' '<<z<<endl;
}




// #include <iostream>
// using namespace std;

// class Compare{
//     int x, y, z;
// public:
//     Compare(){ x = 0; y = 0; z = 0;}
//     int big(int a, int b);
//     int big(int a, int b, int c);
// };

// int Compare::big(int a, int b){
//     if(a>=100 || b>=100) return 100; 
//     else if(a > b) return a;
//     else if(a < b) return b;
//     else return 0;
// }
// int Compare::big(int a, int b, int c){
//     if(a>=c || b>=c) return c; 
//     else if(a > b) return a;
//     else if(a < b) return b;
//     else return 0;
// }

// int main(){
//     Compare comp;
//     int x = comp.big(3,5);
//     int y = comp.big(300, 60);
//     int z = comp.big(30, 60, 50);
//     cout<<x<<' '<<y<<' '<<z<<endl;
// }