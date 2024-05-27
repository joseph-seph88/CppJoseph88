#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    int price;
    int page;
public:
    Book() : title(""), price(0), page(0) {}
    Book(string title, int price, int page) : title(title), price(price), page(page) {}
    friend bool operator==(const Book& obj, int p);
    friend bool operator==(const Book& obj, string t);
    friend bool operator==(const Book& obj, const Book& other);
};

bool operator==(const Book& obj, int p){
    return obj.price == p;
}

bool operator==(const Book& obj, string t){
    return (obj.title == t);
}

bool operator==(const Book& obj, const Book& other){
    return (obj.title == other.title && obj.price == other.price && obj.page == other.page);
}

int main(){
    Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
    if(a == 30000) cout << "정가 30000원" << endl;
    if(a == "명품 C++") cout << "명품 C++ 입니다." << endl;
    if(a == b) cout << "두 책이 같은 책입니다." << endl;
}





// #include <iostream>
// #include <string>
// using namespace std;

// class Book {
//     string title;
//     int price;
//     int page;
// public:
//     Book() : title(""), price(0), page(0) {}
//     Book(string title, int price, int page) : title(title), price(price), page(page) {}
//     bool operator==(int p){
//         return (price == p);
//     }
//     bool operator==(string t){
//         return (title == t);
//     }
//     bool operator==(Book& obj){
//         return (title == obj.title && price == obj.price && page == obj.page);
//     }
// };

// int main(){
//     Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
//     if(a == 30000) cout << "정가 30000원" << endl;
//     if(a == "명품 C++") cout << "명품 C++ 입니다." << endl;
//     if(a == b) cout << "두 책이 같은 책입니다." << endl;
// }