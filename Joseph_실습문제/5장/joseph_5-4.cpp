// #include <iostream>
// using namespace std;

// class Compare{
//     int a;
//     int b; 
//     int big;
// public:
//     bool bigger(int a, int b, int& big);
// };

// bool Compare::bigger(int a, int b, int& big){
//     if(a==b) {
//         return true;
//     } else {
//         big = (a>b) ? a : b;
//         return false;
//         }
// }

// int main(){
    
//     Compare com;
//     int a, b, big;
//     cout<<"2개의 정수를 입력하세요 : ";
//     cin>>a>>b;
    
//     if(com.bigger(a, b, big)){
//         cout<<"두 숫자가 동일 합니다"<<endl;
//     } else{
//         cout<<"2개의 정수 중 더 큰 값은 "<<big<<endl;
//     }
// }