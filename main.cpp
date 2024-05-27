#include <iostream>
#include <string>

using namespace std;

class TV{
private:
    int size;
    
public:
    TV(){size = 20;}
    TV(int size){
        this->size = size;
        cout<<"TV constructor"<<endl;
        }
    ~TV(){
        cout<<"TV destructor"<<endl;
    }
    int getSize(){return this->size;}
};
class WideTV : public TV{
private:
    bool isWide;
public:
    
    WideTV(int size, bool isWide) : TV(size){
        this->isWide = isWide; 
        cout<<"WideTV constructor"<<endl;
        }
        ~WideTV(){
            cout<<"WideTV destructor"<<endl;
        }
    bool getIsWide(){return this->isWide;}
};

class smartTV : public WideTV{
private:
    string ipAddress;
public:
    smartTV(int size, bool isWide, string ipAddress) : WideTV(size, isWide){
        this->ipAddress = ipAddress;
        cout<<"smartTV constructor"<<endl;
    }
    ~smartTV(){
        cout<<"smartTV destructor"<<endl;
    }
    string getIpAddress(){return this->ipAddress;}
};
int main(int argc, const char** argv) {

    smartTV tv(32, true, "237.84.2.178");
    cout<<tv.getSize()<<" "<<tv.getIsWide()<<" "<<tv.getIpAddress()<<endl;
    return 0;
}