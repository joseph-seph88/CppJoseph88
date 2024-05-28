// #include <iostream>
// #include <string>
// using namespace std;

// class Sample{
//     int *p;
//     int size;
// public:
//     Sample(int n){
//         size = n;
//         p = new int[n];
//     }
//     void read(){
//         cout<<size<<"개의 정수 데이터 입력 >> ";
//         for(int i=0; i<size; i++){
//             cin>>p[i];
//         }
//     }
//     void write(){
//         cout<<size<<"개의 정수 데이터 출력 >> ";
//         for(int i=0; i<size; i++){
//             cout<<p[i]<<" ";
//         }
//     }
//     int big(){
//         int temp = p[0];
//         for(int i=0; i<size; i++){
//             if(p[i]>temp){
//                 temp = p[i];
//             }
//         }
//         return temp;
//     }
//     ~Sample(){delete[] p;}
// };

// int main(){
//     Sample s(10);
//     s.read();
//     s.write();
//     cout<<"가장 큰 수는 = "<<s.big()<<endl;
// }
