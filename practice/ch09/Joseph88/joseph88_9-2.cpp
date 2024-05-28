#include <iostream>
using namespace std;

class Converter{
    double ratio;
    virtual double convert(double src)=0;
    virtual string getSourceString()=0;
    virtual string getDestString()=0;
public:
    Converter(double ratio){this->ratio = ratio;}
    void run(){
        double src;
        cout<<getSourceString()<<"을 "<<getDestString()<<"로 바꿉니다. ";
        cout<<getSourceString()<<"을 입력하세요>> ";
        cin>>src;
        cout<<"변환 결과 : "<<convert(src)<<getDestString()<<endl;
    }    
};

class KmToMile : public Converter{
    double ratio;
public : 
    KmToMile(double ratio) : Converter(ratio){this->ratio=ratio;}
    virtual double convert(double src) override{
        return src/ratio;
    }
    virtual string getSourceString() override{
        return "Km";
    }
    virtual string getDestString() override{
        return "Mile";
    }
};

int main(){
    KmToMile toMile(1.609344);
    toMile.run();
}