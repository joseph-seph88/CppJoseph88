// #include <iostream>
// using namespace std;

// class Wallet{
//     int *ptr;
//     int size;
//     int tos;
// public: 
//     Wallet(){
//         ptr = nullptr; int size = 0; int tos = -1;
//     }
//     Wallet(int size){
//         this->size = size;
//         ptr = new int[size];
//     }
//     Wallet(const Wallet& obj){
//         size = obj.size;
//         ptr = new int[size];
//         for(int i=0; i<=obj.tos; i++){
//             ptr[i] = obj.ptr[i];
//         }
//         tos = obj.tos;
//     }
//     ~Wallet(){
//         delete[] ptr;
//         cout<<"!Create Destructor!"<<endl;
//     }
//     bool push(int n);
//     bool pop(int& n);
// };

// bool Wallet::push(int n){
//     if(tos==size-1) return false;
//     else {
//         tos++;
//         ptr[tos] = n;
//         cout<<"ptr의 "<<tos<<"번째에 "<<ptr[tos]<<"값을 푸쉬했습니다."<<endl;
//         return true;
//     }
// }

// bool Wallet::pop(int& n){
//     if(tos<0) return false;
//     else{
//         n = ptr[tos];
//         cout<<"ptr의 "<<tos<<"번째에 "<<ptr[tos]<<"값을 팝했습니다."<<endl;
//         tos--;
//         return true;
//     }
// }

// int main(){
//     Wallet wall(10);
//     Wallet mall = wall;
//     wall.push(30);
//     wall.push(20);
//     mall.push(200);

//     int n;
//     wall.pop(n);
//     cout<<"W 스택 a에서 팝한 값"<<n<<endl;
//     wall.pop(n);
//     cout<<"W 스택 a에서 팝한 값"<<n<<endl;
//     mall.pop(n);
//     cout<<"M 스택 a에서 팝한 값"<<n<<endl;
// }



























// #include <iostream>
// using namespace std;

// class MyIntStack{
//     int *p;
//     int size;
//     int tos;
// public:
//     MyIntStack();
//     MyIntStack(int size);
//     MyIntStack(const MyIntStack& s);
//     ~MyIntStack();
//     bool push(int n);
//     bool pop(int& n);
// };

// MyIntStack::MyIntStack(){
//     p = nullptr;
//     size = 0;
//     tos = -1;
// }

// MyIntStack::MyIntStack(int size){
//     p = new int[size];
//     this->size = size;
// }

// MyIntStack::MyIntStack(const MyIntStack& s){
//     size = s.size;
//     p = new int[size];
//     for(int i=0; i<s.tos; i++){
//         p[i] = s.p[i];
//     }
//     tos = s.tos;
// }

// MyIntStack::~MyIntStack(){
//     delete[] p;
//     cout<<"생성자 소멸!"<<endl;
// }

// bool MyIntStack::push(int n){
//     if(tos==size-1) return false;
//     else {
//         tos++;
//         p[tos] = n;
//         cout<<"push : "<<p[tos]<<endl;
//         return true;
//     }
// }
// bool MyIntStack::pop(int& n){
//     if(tos<0) return false;
//     else{
//         n = p[tos];
//         tos--;
//         return true;
//     }
// }

// int main(){
//     MyIntStack a(10);
//     a.push(10);
//     a.push(20);
//     MyIntStack b = a;
//     b.push(30);

//     int n;
//     a.pop(n);
//     cout<<"스택 a에서 팝한 값"<<n<<endl;
//     b.pop(n);
//     cout<<"스택 b에서 팝한 값"<<n<<endl;

//     return 0;
// }





// #include <iostream>
// using namespace std;

// class MyIntStack{
//     int *p;
//     int size;
//     int tos;
// public:
//     MyIntStack();
//     MyIntStack(int size);
//     MyIntStack(const MyIntStack& s);
//     ~MyIntStack();
//     bool push(int n);
//     bool pop(int &n);
// };

// MyIntStack::MyIntStack(){
//     size = 10;
//     tos = -1;

// }
// MyIntStack::MyIntStack(int size){
//     this->size = size;
//     p = new int [size];
// }
// MyIntStack::MyIntStack(const MyIntStack& s){
//     size = s.size;
//     tos = s.tos;
//     for(int i=0; i<=tos; i++){
//         p[i] = s.p[i];
//     }
//     p = new int [size];
// }
// MyIntStack::~MyIntStack(){
//     delete[] p;
//     cout<<"해제됨"<<endl;
// }

// bool MyIntStack::push(int n){
//     if(tos==size-1) return false;
//     else {
//         p[++tos] = n; 
//         return true;
//     }
// }
// bool MyIntStack::pop(int &n){
//     if(tos==-1) return false;
//     else {
//         n = p[tos--]; 
//         return true;
//     }
// }

// int main(){
//     MyIntStack a(10);
//     a.push(10);
//     a.push(20);
//     MyIntStack b = a;
//     b.push(30);

//     int n;
//     a.pop(n);
//     cout<<"스택 a에서 pop한 값"<<n<<endl;
//     b.pop(n);
//     cout<<"스택 b에서 pop한 값"<<n<<endl;
// }