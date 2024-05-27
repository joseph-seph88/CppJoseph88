#include <iostream>
#include <string>
<<<<<<< HEAD

=======
>>>>>>> 132916710875c86f007ab766c0b7fa407aef117b
using namespace std;

int main(int argc, char const *argv[])
{
<<<<<<< HEAD
    string song("Falling in love with you");
    string elvis("Elvis Pesley");
    string singer;

    cout << song + " 를 부른 가수는 " + elvis;
    cout <<"(힌트 : 첫글자)" << elvis[0]<<")" << endl;
    // cin.getline(singer.data(), 20);
    getline (cin, singer);
    if(singer==elvis){

        cout << "Elvis!";
    } else {
        cout << "Not Elvis!";
    }
=======
    string str;
    string *address = new string("www.google.com");
    string *paddress = address;

    char text[] = "Hello World";
    string *ptext = new string(text);

    string *p = new string("Hello World");
    cout<<*p<<endl;

    cout<<p->append("!").insert(5, " andrew ").replace(0, 5, "Hola").size();
    cout<<*p<<endl;

    cout<< p->compare("Hello World!!")<<endl;

>>>>>>> 132916710875c86f007ab766c0b7fa407aef117b

    return 0;
}
