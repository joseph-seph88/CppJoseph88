#include <iostream>
using namespace std;

int main(){
    int order;
    int orderNumber;

    cout<<"***** 승리장에 오신 것을 환영합니다. *****\n";

    while(1){
        cout<<"짬뽕:1, 짜장:2, 군만두:3, 종료:4 >> ";
        cin>>order;

        if(order < 1 || order > 4){
            cout<<"다시 주문하세요!!"<<endl;
        }

        else if(order == 4){
            cout<<"오늘 영업은 끝났습니다."<<endl;
            break;
        }
        else {
            cout<<"몇 인분?";
            cin>>orderNumber;
            cout<<"짬뽕 "<<orderNumber<<" 인분 나왔습니다."<<endl;
        }
    }
}