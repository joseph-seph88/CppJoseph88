#include <iostream>
using namespace std;

class ArrayUtility2 {
private:
public:
    static int* concat(int s1[], int s2[], int size);
    static int* remove(int s1[], int s2[], int size, int& retSize);
};

int* ArrayUtility2::concat(int s1[], int s2[], int size)
{
    int* ret = new int[2*size];
    for(int i = 0; i < size; i++) ret[i] = s1[i];
    for(int i = 0; i < size; i++) ret[size + i] = s2[i];
    return ret;
}

int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize)
{
    int* ret = new int[size];
    int idx = 0;
    for(int i = 0; i < size; i++) {
        bool found = false;
        for(int j = 0; j < size; j++) {
            if(s1[i] == s2[j]) {
                found = true;
                break;
            }
        }
        if(!found) {
            ret[idx++] = s1[i];
        }
    }
    retSize = idx;
    return ret;
}

int main(int argc, char const *argv[])
{
    int x[5], y[5];
    cout << "정수를 5 개 입력하라. 배열 x에 삽입한다>>";
    cin >> x[0] >> x[1] >> x[2] >> x[3] >> x[4];

    cout << "정수를 5 개 입력하라. 배열 y에 삽입한다>>";
    cin >> y[0] >> y[1] >> y[2] >> y[3] >> y[4];

    cout << "합친 정수 배열을 출력한다" << endl;
    int* z = ArrayUtility2::concat(x, y, 5);
    for(int i = 0; i < 10; i++) cout << z[i] << ' ';
    cout << endl;

    int retSize = 0;
    int* w = ArrayUtility2::remove(x, y, sizeof(x)/sizeof(int), retSize);
    cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << retSize << endl;
    for(int i = 0; i < retSize; i++) cout << w[i] << ' ';
    cout << endl;

    delete[] w;
    delete[] z;

    return 0;
}