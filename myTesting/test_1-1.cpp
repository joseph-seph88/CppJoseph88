#include <iostream>
#include <string>
using namespace std;

class Str{
    char* buffer;
public:
    Str(const char* initInput);
    Str(const Str& CpyCons);
    ~Str();
    string getString() const {return buffer;}
};

int main(){
    Str s1("hello");
    Str s2 = s1;

    cout<<s1;
    cout<<s2;

    return 0;
}