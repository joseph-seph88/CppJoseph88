// #include <iostream>
// using namespace std;

// class Circle{
//     int radius;
// public:
//     void setRadius(int r) {radius = r;}
//     double getArea() {return 3.14*radius*radius;}
// };

// int main(){
//     int r;
//     int count = 0;
//     int num = 0;
//     double area = 0;
//     cout<<"원의 개수 : ";
//     cin>>num;

//     Circle c[num];    

//     cout<<"반지름 값 입력 : ";


//     for(int i=0; i<3; i++){
//         cin>>r;       
//         c[i].setRadius(r); 
//         area = c[i].getArea();
//         if(area > 100){
//             count++;
//         }
//         cout<<i+1<<"번째 면적 : "<<area<<endl;

//     }
//     cout<<"면적이 100보다 큰 원의 개수 : "<<count<<endl;

// }