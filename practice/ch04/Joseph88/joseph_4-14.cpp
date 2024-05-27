// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;

// class Player{
//     string name;
// public:
//     Player(string name) {this->name = name;}
//     string getName() {return name;}
//     void setName(string& name) {this->name = name;}
// };

// class GamblingGame{
//     Player players[2];
//     int number[3];
// public:
//     GamblingGame(string name1, string name2);
//     void playNumber();
//     bool checkWin();
//     void turnPlay();
// };

// GamblingGame::GamblingGame(string name1, string name2){
//     players[0].setName(name1);
//     players[1].setName(name2);
// }

// void GamblingGame::playNumber(){
//     for(int i = 0; i < 3; i++){
//         number[i] = rand() % 3;
//         cout << " " << number[i] << " ";
//     }
//     if(number[0]!=number[1] || number[1]!=number[2]){
//         cout<<"아쉽군요!"<<endl;
//     }    
// }

// bool GamblingGame::checkWin(){
//     if(number[0]==number[1] && number[1]==number[2]){
//         cout<<"승리!!"<<endl;
//         return true;
//     }
//     else return false;
// }


// void GamblingGame::turnPlay(){

//     while(1){
//         cout<<players[0].getName()<<":<Enter>  ";
//         cin.ignore();
//         playNumber();
//         checkWin();
//     }
// }

// int main(){
//     string name1, name2;
//     cout << "***** 겜블링 게임을 시작합니다. *****" << endl;
//     cout << "첫번째 선수 이름 입력: ";
//     cin >> name1;
//     cout << "두번째 선수 이름 입력: ";
//     cin >> name2;

//     GamblingGame(name1, name2);
//     void turnPlay();

//     return 0;
// }



// #include <iostream>
// #include <string>
// #include <cstdlib>
// #include <ctime>
// using namespace std;

// class Player {
//     string name;

// public:
//     Player() {}
//     Player(const string& name) : name(name) {}

//     string getName() const { return name; }
//     void setName(const string& name) { this->name = name; }
// };

// class GamblingGame {
//     Player players[2];
//     int numbers[3]; 

// public:
//     GamblingGame(const string& name1, const string& name2) {
//         players[0].setName(name1);
//         players[1].setName(name2);
//     }

//     int random() const { return rand() % 3; }

//     void generateNumbers() {
//         for (int i = 0; i < 3; ++i) {
//             numbers[i] = random();
//         }
//     }

//     void printNumbers() const {
//         for (int i = 0; i < 3; ++i) {
//             cout << " " << numbers[i] << " ";
//         }
//         if (numbers[0] != numbers[1] || numbers[1] != numbers[2]) {
//             cout << "아쉽군요.";
//         }
//         cout << endl;
//     }

//     bool checkWin() const {
//         return numbers[0] == numbers[1] && numbers[1] == numbers[2];
//     }

//     void play() {
//         srand(time(0)); 
//         int currentPlayer = 0;
//         while (true) {
//             cout << players[currentPlayer].getName() << ": <Enter>";
//             cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
//             cin.get(); 
//             generateNumbers();
//             printNumbers();

//             if (checkWin()) {
//                 cout << players[currentPlayer].getName() << "가(이) 이겼습니다!" << endl;
//                 break;
//             }

//             currentPlayer = (currentPlayer + 1) % 2; 
//         }
//     }
// };

// int main() {
//     string name1, name2;
//     cout << "***** 겜블링 게임을 시작합니다. *****" << endl;

//     cout << "첫번째 선수 이름 입력: ";
//     cin >> name1;
//     cout << "두번째 선수 이름 입력: ";
//     cin >> name2;

//     GamblingGame game(name1, name2);
//     game.play();

//     return 0;
// }
