#include <iostream>
#include <string>
using namespace std;

class Container{
    int size;
public:
    Container(){ size = 10; }
    void fill(){ size = 10; }
    void consume(){ size -= 1; }
    int getSize(){ return size; }
};

class CoffeeVendingMachine{
    Container tong[3];
    void fill();
    void selectEspresso();
    void selectAmericano();
    void selectSugarCoffee();
    void show();
public:
    void run(); 
};

void CoffeeVendingMachine::fill(){
    tong[0].fill();
    tong[1].fill();
    tong[2].fill();
    show();
}

void CoffeeVendingMachine::selectEspresso(){
    tong[0].consume();
    tong[1].consume();
    show();
}

void CoffeeVendingMachine::selectAmericano(){
    tong[0].consume();
    tong[1].consume();
    tong[1].consume();
    show();
}

void CoffeeVendingMachine::selectSugarCoffee(){
    tong[0].consume();
    tong[1].consume();
    tong[1].consume();
    tong[2].consume();
    show();
}

void show(){
    cout << "커피 " << tong[0].getSize() << ", 물 " << tong[1].getSize() << ", 설탕 " << tong[2].getSize() << endl; 
}

void CoffeeVendingMachine::run(){
    int order = 0;
    cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>> "<<endl;
    cin >> order;
    if(order==1) selectEspresso();
    else if(order==2) selectAmericano();
    else if(order==3) selectSugarCoffee();
    else if(order==4) show();
    else if(order==5) fill();


int main(int argc, char const *argv[]){
    CoffeeVendingMachine cvm;
    cout<<"***** 커피자판기를 작동합니다. *****"<<endl;
    while(1){
        cvm.run();
    }
    return 0;
}



// #include <iostream>
// #include <string>
// using namespace std;

// class Container{
//     int size;
// public:
//     Container(){ size = 10; }
//     void fill(){ size = 10; }
//     void consume(){ size -= 1; }
//     int getSize(){ return size; }
// };

// class CoffeeVendingMachine{
//     Container tong[3];
//     void fill(){
//         tong[0].fill();
//         tong[1].fill();
//         tong[2].fill();
//         cout << "재료가 모두 충전되었습니다." << endl;
//     }
//     bool checkIngredients(int coffee, int water, int sugar){
//         if(tong[0].getSize() < coffee || tong[1].getSize() < water || (sugar > 0 && tong[2].getSize() < sugar)){
//             cout << "재료가 부족합니다. 재료를 충전하세요." << endl;
//             return false;
//         }
//         return true;
//     }
//     void selectEspresso() {
//         if(checkIngredients(1, 1, 0)){
//             tong[0].consume();
//             tong[1].consume();
//             cout << "에스프레소 드세요." << endl;
//         }
//     }
//     void selectAmericano(){
//         if(checkIngredients(1, 2, 0)){
//             tong[0].consume();
//             tong[1].consume();
//             tong[1].consume();
//             cout << "아메리카노 드세요." << endl;
//         }
//     }
//     void selectSugarcoffee(){
//         if(checkIngredients(1, 2, 1)){
//             tong[0].consume();
//             tong[1].consume();
//             tong[1].consume();
//             tong[2].consume();
//             cout << "설탕커피 드세요." << endl;
//         }
//     }
//     void show(){
//         cout << "커피 " << tong[0].getSize() << ", 물 " << tong[1].getSize() << ", 설탕 " << tong[2].getSize() << endl; 
//     }
// public:
//     void run(){
//         cout << "커피자판기를 가동합니다." << endl;
//         int order = 0;
//         while(true){
//             cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>> ";
//             cin >> order;

//             if(order == 1){
//                 selectEspresso();
//             }
//             else if(order == 2){
//                 selectAmericano();
//             }
//             else if(order == 3){
//                 selectSugarcoffee();
//             }
//             else if(order == 4){
//                 show();
//             }
//             else if(order == 5){
//                 fill();
//             }
//             else break;
//         }
//     }
// };

// int main(){
//     CoffeeVendingMachine cvm;
//     cvm.run(); 

//     return 0;
// }
