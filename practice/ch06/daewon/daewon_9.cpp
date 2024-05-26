#include <iostream>
#include <string>
using namespace std;

class Board {
private:
    static int index;
    static string msg[100];
public:
    static void add(const string& msg);
    static void print();
};

int Board::index = 0;
string Board::msg[100];

void Board::add(const string& msg) {
    Board::msg[index++] = msg;
}

void Board::print() {
    cout << "************* 게시판입니다. *************" << endl;
    for(int i = 0; i < index; i++) cout << i << ": " << Board::msg[i] << endl;
    cout << endl;
}

int main(int argc, char const *argv[])
{
    Board::add("중간고사는 감독 없는 자율 시험입니다.");
    Board::add("코딩 라운지 많이 이용해 주세요.");
    Board::print();
    Board::add("진소린 학생이 경진대회 입상하였습니다. 축하해주세요");
    Board::print();
    
    return 0;
}