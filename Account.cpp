#include "Account.h"
#include <iostream>
using namespace std;

Account::Account(string name, int id, int balance){
    this->name = name;
    this->id = id;
    this->balance = balance;
}

string Account::getOwner(){
    return name;
}

int Account::inquiry(){
    return balance;
}

int Account::deposit(int money){
    balance += money;
    return balance;
}

int Account::withdraw(int money){
    balance -= money;
    return balance;
}