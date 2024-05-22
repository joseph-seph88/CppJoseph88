#include <iostream>
using namespace std;

int main(){
    int menu;
    int order;
    cout<<"***** 승리장에 오신 것을 환영합니다. *****\n";
    
    cout<<"짬뽕:1, 짜장:2, 군만두:3, 종료:4 >>";
    cin>>menu;
    cout<<"몇 인분?";
    cin>>order;
    cout<<"짬뽕 "<<order<<"인분 나왔습니다."<<endl;

    cout<<"짬뽕:1, 짜장:2, 군만두:3, 종료:4 >>";
    cin>>menu;
    cout<<"몇 인분?";
    cin>>order;
    cout<<"짜장 "<<order<<"인분 나왔습니다."<<endl;
    
    cout<<"짬뽕:1, 짜장:2, 군만두:3, 종료:4 >>";
    cin>>menu;
    if(menu != 1 || 2 || 3 || 4){
        cout<<"다시 주문하세요!!";
    }
    cout<<"짬뽕:1, 짜장:2, 군만두:3, 종료:4 >>";

    if(menu > 99){
        cout<<"오늘 영업은 끝났습니다."<<endl;
    }



}