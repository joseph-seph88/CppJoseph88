#include <iostream>
using namespace std;   

class Find{
    char a[];
    char c;
    bool success;
public:
    
    char& find(char a[], char c, bool& success);
}

char Find::find(char* s, char c, bool b){
}


int main(){
    char s[] = "Joseph";
    bool b = false;
    char& loc = find(s, 'M', b);
    if(b == false){
        cout<<"M을 발견할 수 없다."<<endl;
        return 0;
    }
    loc = 'm';
    cout<<s<<endl;
}