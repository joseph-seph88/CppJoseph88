
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