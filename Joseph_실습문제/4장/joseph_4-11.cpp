#include <iostream>
using namespace std;

class CoffeeVendingMachine{
    Container tong[3];
    void fill();
    void selectEspresso();
    void selectAmericano();
    void selectSugarcoffee();
    void show();
public:
    void run();
};

class Container{
    int size;
public:
    Container(){size=10;}
    void fill(){size=10;}
    void consume(){size-=1;}
    
    int getSize(){return size;}
};

int main(){
    CoffeeVendingMachine cvm;
    cout<<"***** 커피자판기를 작동합니다. *****"<<endl;
    cout<<"메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>> "<<endl;
    cin>>tong[0];
    

}