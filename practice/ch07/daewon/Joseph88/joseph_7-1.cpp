#include <iostream>
using namespace std;

class Book{
    string name;
    int price;
    int page;
public:
    Book():name(""), price(0), page(0) {}
    Book(string name, int price, int page) : name(name), price(price), page(page) {}   
    friend Book& operator+=(Book& obj, int p);
    friend Book& operator-=(Book& obj, int p);
    void show(); 
};

Book& operator+=(Book& obj, int p){
    obj.price += p;
    return obj;
}
Book& operator-=(Book& obj, int p){
    obj.price -= p;
    return obj;
}

void Book::show(){
    cout<<name<<' '<<price<<' '<<page<<endl;
}

int main(){
    Book a("청춘", 20000, 300), b("미래", 30000, 500);
    a += 500;
    b -= 500;
    a.show();
    b.show();
}



// #include <iostream>
// using namespace std;

// class Book{
//     string name;
//     int price;
//     int page;
// public:    
//     Book(): name(""), price(0), page(0) {}
//     Book(string name, int price, int page): name(name), price(price), page(page) {}
//     Book& operator+=(int p){
//         price += p;
//         return *this;
//     }
//     Book& operator-=(int p){
//         price -= p;
//         return *this;
//     }
//     void show();
// };

// void Book::show(){
//     cout<<name<<' '<<price<<' '<<page<<endl;
// }
// int main(){
//     Book a("청춘", 20000, 300), b("미래", 30000, 500);
//     a += 500;
//     b -= 500;
//     a.show();
//     b.show();
// }
