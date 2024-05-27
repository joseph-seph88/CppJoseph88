#include <iostream>
#include <string>
using namespace std;

class Trace {
private:
    static string tag[100];
    static string debug_msg[100];
    static int index;
public:
    static void put(const string& tag, const string& debug_msg);
    static void print(const string& tag);
    static void print();
};


string Trace::tag[100];
string Trace::debug_msg[100];
int Trace::index = 0;


void Trace::put(const string& tag, const string& debug_msg) {
    Trace::tag[index] = tag;
    Trace::debug_msg[index] = debug_msg;
    index++;
}

void Trace::print(const string& tag) {
    cout << "----- " << tag << "태그의 Trace 정보를 출력합니다. -----" << endl;
    for(int i = 0; i < index; i++) {
        if(Trace::tag[i] == tag) cout << Trace::tag[i] << ":" << Trace::debug_msg[i] << endl;
    }
}

void Trace::print() {
    cout << "----- 모든 Trace 정보를 출력합니다. -----" << endl;
    for(int i = 0; i < index; i++) cout << Trace::tag[i] << ":" << Trace::debug_msg[i] << endl;
}

void f() {
    int a, b, c;
    cout << "두 개의 정수를 입력하세요>>";
    cin >> a >> b;
    Trace::put("f()", "정수를 입력 받았음");
    c = a + b;
    Trace::put("f()", "합 계산");
    cout << "합은 " << c << endl;
}

int main(int argc, char *const argv[])
{
    Trace::put("main()", "프로그램 시작합니다");
    f();
    Trace::put("main()", "종료"); // put()의 첫 번째 매개 변수는 태그이고 두 번째 매개변수는 디버깅 정보이다.

    Trace::print("f()");    // "f()" 태그를 가진 디버깅 정보를 모두 출력한다.
    Trace::print();         // 모든 디버깅 정보를 출력한다.

    return 0;
}