#include <iostream>
#include <string>
using namespace std;

class Person{
    string name;
    string tel;
public:
    Person() : name(""), tel("") {}
    string getName(){return name;}
    string getTel(){return tel;}
    void set(string name, string tel){
        this->name = name;
        this->tel = tel;
    }
    void push(){
            cin>>name>>tel;
    }
};

int main(){
    Person p[3];
    string name;
    cout<<"이름과 전화 번호를 입력하세요."<<endl;
    
    for(int i=0; i<3; i++){
        cout<<"사람 "<<i+1<<">> ";
        p[i].push();
    }
    cout<<"모든 사람의 이름 : "<<p[0].getName()<<" "<<p[1].getName()<<" "<<p[2].getName()<<endl;
    cout<<"전화 번호를 검색하려면 이름을 입력하세요 : ";
    cin>>name;
    for(int i=0; i<3; i++){
        if(p[i].getName() == name){
            cout<<name<<"의 전화 번호는 "<<p[i].getTel()<<" 입니다."<<endl;
            break;
        }
    }

}