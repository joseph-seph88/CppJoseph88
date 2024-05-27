#include <iostream>
using namespace std;

class Book{
    string place;
    int price;
    int page;
public:
    Book(): place(""), price(0), page(0) {}
    Book(string pl, int pr, int pa): place(pl), price(pr), page(pa) {}
    friend bool operator!(const Book& obj);
};

bool operator!(const Book& obj){
    return obj.price == 0;
}

int main(){
    Book book("벼룩시장", 0, 50);
    if(!book) cout<<"공짜다"<<endl;
}



// #include <iostream>
// using namespace std;

// class Book{
//     string place;
//     int price;
//     int page;
// public:
//     Book(): place(""), price(0), page(0) {}
//     Book(string pl, int pr, int pa): place(pl), price(pr), page(pa) {}
//     bool operator!(){
//         return price == 0;
//     }   
// };

// int main(){
//     Book book("벼룩시장", 0, 50);
//     if(!book) cout<<"공짜다"<<endl;
// }