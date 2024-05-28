// #include <iostream>
// #include <string>
// #include <cstdlib>
// #include <ctime>
// using namespace std;

// int main(){
//     srand(time(NULL));
//     cout<<"아래에 한 줄을 입력하세요. (exit을 입력하면 종료합니다.)"<<endl;
    
//     while(true){
//         string text1;
//         getline(cin, text1, '\n');
        
//         if(text1 == "exit") break;
//         if(text1.empty()) continue;
        
//             int n = rand() % text1.length() ;
//             char c = 'a' + rand()%26;
//         while(text1[n] == ' '){
//             n = rand() % text1.length() ;
//         }    
//             text1[n] = c;
//             cout<<text1<<endl;
        
//     }

// }