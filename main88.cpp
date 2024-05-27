#include <iostream>
using namespace std;

class Base {
	int a;
protected:
	void setA(int a) { this->a = a; }
public:
	void showA() { cout << a; }
};

class Derived : private Base {//private -> public으로 바꾼다면 GrandDerived가 접근 가능
	int b;
protected:
	void setB(int b) { this->b = b; }
public:
	void showB() {
		setA(5); 						// ① 접근 가능
		showA(); 					// ② 접근 가능
		cout << b;
	}
};

class GrandDerived : public Derived {
	int c;
protected:
	void setAB(int x) {
		setA(x); 						// ③ 접근 불가능
		showA(); 					// ④ 접근 불가능
		setB(x); 						// ⑤ 접근 가능
	}
};


// #include <iostream>
// #include <string>
// using namespace std;

// class TV{
//     int size;
// public:
//     TV(){size = 20;}
//     TV(int size){
//         this->size = size;
//         cout<<"TV constructor"<<endl;        
//     }
//     ~TV() {
//         cout<<"TV Distructor"<<endl;
//     }
//     int getSize(){return this->size;}

// };

// class WideTV : public TV{
// private:
//     bool isWide;
// public:
//     WideTV(int size, bool isWide) : TV(size){
//         this->isWide = isWide;
//         cout<<"WideTV constructor"<<endl;
//         }
//     ~WideTV() {
//         cout<<"WideTV Distructor"<<endl;
//     }
//     bool getIsWide(){return this->isWide;}
// };

// class smartTV : public WideTV{
// private:
//     string ipAddress;    
// public:
//     smartTV(int size, bool isWide, string ipAddress) : WideTV(size, isWide){
//         this->ipAddress = ipAddress;
//         cout<<"smartTV constructor"<<endl;
//     }
//     ~smartTV() {
//         cout<<"smartTV Distructor"<<endl;
//     }    
//     string getIpAddress(){return this->ipAddress;}
// };

// int main(){

//     smartTV tv(32, true, "237.84.2.178");
//     cout << tv.getSize() << ", " << tv.getIsWide() << ", " << tv.getIpAddress() << endl;


//     return 0;    
// }



// #include <iostream>
// #include <string>
// using namespace std;

// class Point{
// protected:
//     int x, y;

// public:
//     void set(int x, int y){
//         this->x = x;
//         this->y = y;
//     }
//     void showPoint(){
//         cout << "(" << x << ", " << y << ")" << endl;
//     }
// };

// // Point 클래스 상속
// class ColorPoint : public Point{
// private:
//     string color;
// public:
//     void set(int x, int y){
//         this->x = x;
//         this->y = y;
//     }
//     void setColor(string color){
//         this->color = color;
//     }
//     void showColorPoint(){
//         cout << this->color << ": ";
//         showPoint();
//     }
// };

// class c{
// public:
//     void set(int x, int y){
//         this->x = x;
//         this->y = y;        
//     }
// };

// int main(){
//     Point p;
//     ColorPoint cp;
//     p.set(10, 20);
    
//     cp.set(10, 20);
//     p.showPoint();
//     cp.setColor("Red");
//     cp.showColorPoint();

//     ColorPoint *pDer = new ColorPoint();
//     Point *pBase, po;

//     pDer->set(3, 4);
//     pDer->setColor("Blue");

//     return 0;    
// }
