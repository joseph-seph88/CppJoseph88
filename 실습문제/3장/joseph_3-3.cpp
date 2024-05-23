// #include <iostream>
// #include <string>
// using namespace std;

// class Account{
//     string name;
//     int id;
//     int balance;
// public:
//     Account(string name, int id, int balance);
//     string getOwner();
//     int deposit(int money);
//     int withdraw(int money);
//     int inquiry();
// };

// Account::Account(string name, int id, int balance){
//     this->name = name;
//     this->id = id;
//     this->balance = balance;
// }

// string Account::getOwner(){
//     return name;
// }

// int Account::inquiry(){
//     return balance;
// }

// int Account::deposit(int money){
//     balance += money;
//     return balance;
// }

// int Account::withdraw(int money){
//     balance -= money;
//     return balance;
// }

// int main(){
//     Account a("joseph", 1, 5000);
//     a.deposit(50000);
//     cout<<a.getOwner()<<"님의 잔액 : "<<a.inquiry()<<endl;
//     int money = a.withdraw(20000);
//     cout<<a.getOwner()<<"님의 잔액 : "<<a.inquiry()<<endl;
// }