#include <iostream>
using namespace std;

class SortedArray {
private:
    int size;
    int *p;
    void sort();
public:
    SortedArray();
    SortedArray(SortedArray& src);
    SortedArray(int p[], int size);
    ~SortedArray();
    SortedArray operator + (SortedArray& op2);
    SortedArray& operator = (const SortedArray& op2);
    void show();
};

void SortedArray::sort() {
    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(p[i] > p[j]) {
                int temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
}

SortedArray::SortedArray() {
    size = 0;
    p = NULL;
}

SortedArray::SortedArray(SortedArray& src) {
    size = src.size;
    p = new int[size];
    for (int i = 0; i < size; i++) {
        p[i] = src.p[i];
    }
    sort();
}

SortedArray::SortedArray(int p[], int size) {
    this->size = size;
    this->p = new int[size];
    for (int i = 0; i < size; i++) {
        this->p[i] = p[i];
    }
    sort();
}

SortedArray::~SortedArray() {
    delete[] p;
}

SortedArray SortedArray::operator + (SortedArray& op2) {
    SortedArray c;
    c.size = size + op2.size;
    c.p = new int[c.size];
    for(int i = 0; i < size; i++) {
        c.p[i] = p[i];
    }

    for(int i = 0; i < op2.size; i++) {
        c.p[size + i] = op2.p[i];
    }

    c.sort();
    return c;
}

SortedArray& SortedArray::operator = (const SortedArray& op2) {
    size = op2.size;
    p = new int[size];
    for (int i = 0; i < size; i++) {
        p[i] = op2.p[i];
    }
    return *this;
}

void SortedArray::show() {
    cout << "배열 출력 : ";
    for (int i = 0; i < size; i++) {
        cout << p[i] << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    int n[] = { 2, 20, 6};
    int m[] = { 10, 7, 8, 30};
    SortedArray a(n, 3), b(m, 4), c;

    c = a + b;

    a.show();
    b.show();
    c.show();

    return 0;
}