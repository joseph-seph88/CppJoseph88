#include <iostream>
#include <string>
using namespace std;

class Statistics {
private:
    int index;
    int* data;
public:
    Statistics();
    ~Statistics();
    bool operator ! ();
    Statistics& operator << (int n);
    void operator ~ ();
    void operator >> (int& n);
};

Statistics::Statistics() {
    index = 0;
    data = new int[100];
}

Statistics::~Statistics() {
    delete[] data;
}

bool Statistics::operator ! () {
    if(index == 0) return true;
    else return false;
}

Statistics& Statistics::operator << (int n) {
    data[index++] = n;
    return *this;
}

void Statistics::operator ~ () {
    for(int i = 0; i < index; i++)
        cout << data[i] << ' ';
    cout << endl;
}

void Statistics::operator >> (int& n) {
    n = 0;
    for(int i = 0; i < index; i++) n += data[i];
    n /= index;
}

int main(int argc, char const *argv[])
{
    Statistics stat;
    if(!stat) cout << "현재 통계 데이터가 없습니다." << endl;

    int x[5];
    cout << "5 개의 정수를 입력하라>>";
    for(int i = 0; i < 5; i++) cin >> x[i]; // x[i]에 정수 입력

    for(int i = 0; i < 5; i++) stat << x[i];    // x[i] 값을 통계 객체에 삽입한다.
    stat << 100 << 200; // 100, 200을 통계 객체에 삽입한다.
    ~stat;  // 통계 데이터를 모두 출력한다.

    int avg;
    stat >> avg;    // 통계 객체로부터 평균을 받는다.
    cout << "avg=" << avg << endl;  // 평균을 출력한다.

    return 0;
}