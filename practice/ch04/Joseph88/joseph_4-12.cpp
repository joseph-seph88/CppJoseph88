// #include <iostream>
// #include <string>
// using namespace std;

// class Circle{
//     int radius;
//     string name;
// public:
//     void setCircle(int r, string n) {
//         radius = r;
//         name = n;
//     }
//     double getArea() {return 3.14*radius*radius;}
//     string getName() {return name;}
// };

// class CircleManager{
//     Circle *p;
//     int size;
// public:
//     CircleManager(int s);
//     ~CircleManager();
//     void searchByName();
//     void searchByArea();
// };

// CircleManager::CircleManager(int s){
//     size = s;
//     p = new Circle[size];
//     for(int i=0; i<size; i++){
//         string n;
//         int r;
//         cout<<"원 "<<i+1<<"의 이름과 반지름 입력 : ";
//         cin>>n>>r;
//         p[i].setCircle(r, n);
//     }
// }

// CircleManager::~CircleManager(){
//     delete[] p;
// }

// void CircleManager::searchByName(){
//     string name;
//     cout<<"검색하고자 하는 원의 이름 >> ";
//     cin>>name;
//     for(int i=0; i<size; i++){
//         if(p[i].getName() == name){
//             cout<<name<<"의 면적 : "<<p[i].getArea()<<endl;
//         }
//     }
// }
// void CircleManager::searchByArea(){
//     int area;
//     cout<<"최소 면적을 입력 >> ";
//     cin>>area;
//     cout<<area<<" 보다 큰 원을 검색합니다."<<endl;
//     for(int i=0; i<size; i++){
//         if(p[i].getArea() > area){
//             cout<<p[i].getName()<<"의 면적 : "<<p[i].getArea()<<"  ";
//         }
//     }
//     cout<<endl;
// }

// int main(){
//     int s = 0;
//     cout<<"원의 개수 >> ";
//     cin>>s;

//     CircleManager cm(s);
//     cm.searchByName();
//     cm.searchByArea();

//     return 0;
// }
