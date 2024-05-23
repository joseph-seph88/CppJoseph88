#include <iostream>
using namespace std;

class Compare{

public:
    bool bigger(int a, int b, int& big);
};

bool bigger(int a, int b, int& big){
    if(a==b) {
        return true;
    } else {
        
        
        return false;
        }
}

int main(){
    
    Compare com;
    int a, b, big;
    cout<<"2개의 정수를 입력하세요 : ";
    cin.getline();

}