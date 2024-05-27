#include <iostream>
using namespace std;

class Stack {
private:
    int top;
    int arr[100];
public:
    Stack();
    bool operator ! ();
    Stack& operator << (int x);
    void operator >> (int& x);
};

Stack::Stack() {
    top = -1;
}

bool Stack::operator ! () {
    if(top == -1) return true;
    else return false;
}

Stack& Stack::operator << (int x) {
    arr[++top] = x;
    return *this;
}

void Stack::operator >> (int& x) {
    x = arr[top--];
}

int main(int argc, char const *argv[])
{
    Stack stack;
    stack << 3 << 5 << 10;
    while(true) {
        if(!stack) break;
        int x;
        stack >> x;
        cout << x << ' ';
    }
    cout << endl;

    return 0;
}