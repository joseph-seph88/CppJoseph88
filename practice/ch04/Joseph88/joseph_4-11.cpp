// #include <iostream>
// using namespace std;

// class Container{
//     int size;
// public:
//     Container(){
//         size = 10;
//     }
//     void fill(){
//         size = 10;
//     }
//     void consume(){
//         size -= 1;
//     }
//     int getSize(){
//         return size;
//     }
// };

// class CoffeeVendingMachine{
//     Container tong[3];
//     void fill();
//     void selectEspresso();
//     void selectAmericano();
//     void selectSugarCoffee();
//     void show();
// public:
//     void run();
// };

// void CoffeeVendingMachine::fill(){
//     tong[0].fill();
//     tong[1].fill();
//     tong[2].fill();
//     cout<<"원료를 모두 채웠습니다."<<endl;
// }
// void CoffeeVendingMachine::selectEspresso(){
//     if(tong[0].getSize()<1 || tong[1].getSize()<1){
//         cout<<"원료가 부족합니다. 원료를 채우세요."<<endl;
//     } 
//     else{
//         tong[0].consume();
//         tong[1].consume();
//         cout<<"에스프레소 나왔습니다."<<endl;
//     }
// }
// void CoffeeVendingMachine::selectAmericano(){
//     if(tong[0].getSize()<1 || tong[1].getSize()<2){
//         cout<<"원료가 부족합니다. 원료를 채우세요."<<endl;
//     } 
//     else{
//         tong[0].consume();
//         tong[1].consume();
//         tong[1].consume();
//         cout<<"아메리카노 나왔습니다."<<endl;
//     }
// }
// void CoffeeVendingMachine::selectSugarCoffee(){
//     if(tong[0].getSize()<1 || tong[1].getSize()<2 || tong[2].getSize()<1){
//         cout<<"원료가 부족합니다. 원료를 채우세요."<<endl;
//     } 
//     else{
//         tong[0].consume();
//         tong[1].consume();
//         tong[1].consume();
//         tong[2].consume();
//         cout<<"달달커피 나왔습니다."<<endl;
//     }
// }
// void CoffeeVendingMachine::show(){
//     cout<<"커피 "<<tong[0].getSize()<<", 물"<<tong[1].getSize()<<", 설탕"<<tong[2].getSize()<<endl;
// }

// void CoffeeVendingMachine::run(){
//     int order;
//     cout<<"***** 커피자판기를 작동합니다. *****"<<endl;
//     while(1){
//         cout<<"메뉴를 고르세요 (1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>> "<<endl;
//         cin>>order;
//         if(order == 1) selectEspresso();
//         else if(order == 2) selectAmericano();
//         else if(order == 3) selectSugarCoffee();
//         else if(order == 4) show();
//         else if(order == 5) fill();
//         else break;
//     }
// }

// int main(){
//     CoffeeVendingMachine cvm;
//     cvm.run();

//     return 0;
// }
