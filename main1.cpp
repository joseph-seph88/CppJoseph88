#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
using namespace std;

void increase(Circle& c){
    int r = c.getRadius();
    c.setRadius(r+1);
}

int main(int argc, char const *argv[]){
    
        Circle waffle(30);
        increase(waffle);
        cout<<waffle.getRadius()<<endl;



    return 0;
}



// // 11번 문제
// #include <iostream>
// using namespace std;

// class Box{
//     int width, height;
//     char fill;
// public:
//     Box(int w, int h){setSize(w, h); fill='*';}

//     void setFill(char f){fill = f;}
//     void setSize(int w, int h){width=w; height=h;}
//     void draw();
// };

// void Box::draw(){
//     for(int n=0; n<height; n++){
//         for(int m=0; m<width; m++) cout<<fill; 
//         cout<<endl;
//     }
// }

// int main(){
//     Box b(10,2);
//     b.draw();
//     cout<<endl;
//     b.setSize(7,4);
//     b.setFill('^');
//     b.draw();
// }


// // 9번 문제
// #include <iostream>
// #include "joseph_Oval.h"
// using namespace std;

// class Oval{
//     int width, height;
// public:
//     Oval();    
//     ~Oval();
//     Oval(int w, int h);

//     int getWidth();
//     int getHeight();
//     void set(int w, int h);
//     void show();
// };

// Oval::Oval(){
//     width = 1;
//     height = 1;
// }

// Oval::~Oval(){
//     cout<<"Oval 소멸 : width = "<<width<<", height = "<<height<<endl;
// }

// Oval::Oval(int w, int h){
//     width = w;
//     height = h;
// }

// int Oval::getWidth(){
//     return width;
// }

// int Oval::getHeight(){
//     return height;
// }

// void Oval::set(int w, int h){
//     width = w;
//     height = h;
// }

// void Oval::show(){
//     cout<<"width = "<<width<<", height = "<<height<<endl;
// }

// int main()
// {
//     Oval a, b(3,4);
//     a.set(10, 20);
//     a.show();
//     cout<<"width = "<<b.getWidth()<<", height = "<<b.getHeight()<<endl;

//     return 0;
// }



// // 5번 문제
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
// }

// int Random::next(){
//     return rand() % 101;
// }

// int Random::nextInRange(int min, int max){
//     return rand()%(max-min+1) + min;
// }

// int main(){
//     srand(time(NULL));
//     Random r;
//     cout<<"-- 0에서 "<<RAND_MAX<<"까지의 랜덤 정수 10개--"<<endl;
//     for(int i=0; i<10; i++){
//         int n = r.next();
//         cout<<n<<' ';
//     }

//     cout<<endl<<endl<<"-- 2에서 "<<"4까지의 랜덤 정수 10개--"<<endl;
//     for(int i=0; i<10; i++){
//         int n = r.nextInRange(2, 4);
//         cout<<n<<' ';
//     }
//     cout<<endl;

//     return 0;
// }




// // 3번 문제
// #include <iostream>
// #include "Account.h"
// using namespace std;

// int main(){
//     Account kuk("kitae", 1, 5000);

//     kuk.deposit(50000);
//     cout<<kuk.getOwner()<<"의 잔액은 "<<kuk.inquiry()<<endl;
//     kuk.withdraw(20000);
//     cout<<kuk.getOwner()<<"의 잔액은 "<<kuk.inquiry()<<endl;

//     return 0;
// }





// #include <iostream>
// using namespace std;

// int sum(int a, int b){
//     int k, res=0;
//     for(k=a; k<=b; k++){
//         res += k;   
//     }
//     return res;
// }

// int main(){
//     int n=0;
//     cout<<"끝 수를 입력하세요 : ";
//     cin>>n;
//     cout<<"1에서 "<<n<<"까지의 합은 "<<sum(1, n)<<"입니다"<<endl;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main(){
    
//     int k, n = 0;
//     int sum = 0;

//     cout<<"끝 수를 입력하세요";
//     cin>>n;
//     for(k=1; k<=n; k++){
//         sum += k;
//     }
//     cout<<"1에서 "<<n<<"까지의 합은"<<sum<<"입니다"<<endl;

//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// int main(int argc, char *argv[]){
//     string str;
//     cout<<"문자열 입력 : ";
//     cin>>str;
//     for(int i=0; i<str.length(); i++){
//         for(int j=0; j<=i; j++){
//             cout << str[j];
//         }
//         cout<<endl;
//     }

//     return 0;
// }


// #include <iostream>
// #include <string>
// #include <cstring>
// using namespace std;

// int main(){
//     char str2[20];

//     cout<<"문자열 입력 : ";
//     cin>>str2;
//     int len = strlen(str2);

//     for(int i=0; i<len; i++){
//         cout<<str2[i]<<endl;
//     }

//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     string str1;
//     string str2;

//     cout<<"새 암호 입력 : ";
//     cin>>str1;
    
//     cout<<"새 암호를 다시 한 번 입력 : ";
//     cin>>str2;

//     if(str1 == str2)
//         cout<<"같습니다";
//     else
//         cout<<"같지 않습니다";


//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     string str;
//     string address = "www.google.com";
//     string *paddr = &address;

//     char text[]= "Hello World:)";
//     string title(text);
//     string *ptext = new string(text);
//     string *p = new string("Hello World!");

//     cout << *p << endl;
//     cout << p->append("@").insert(5, " joseph").replace(0, 5, "Halo").size();
//     cout << *p << endl;
//     cout << p->compare("Hello World!") << endl;

//     return 0;
// }