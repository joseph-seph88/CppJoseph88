// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// using namespace std;   

// class Random{

// public:
//     Random();
//     int next();
//     int nextInRange(int min, int max);
// };

// Random::Random(){
//     srand(time(NULL));
// }

// int Random::next(){
//     return rand()%100;
// }

// int Random::nextInRange(int min, int max){
//     return rand()%(max-min) + min;
// }

// int main(){
//     Random r;
//     cout<<"-- 0에서 "<< RAND_MAX << "까지의 랜덤 정수 10개--"<<endl;
//     for(int i=0; i<10; i++){
//         int n = r.next();
//         cout<<n<<' ';
//     }
//     cout<<endl<<endl<<"-- 2에서 "<<"4까지의 랜덤 정수 10개 --"<<endl;
//     for(int i=0; i<10; i++){
//         int n = r.nextInRange(2, 4);
//         cout<<n<<' ';
//     }
//     cout<<endl;
// }