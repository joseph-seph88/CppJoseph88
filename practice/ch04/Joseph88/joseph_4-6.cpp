// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     string text1;
//     cout<<"아래에 한 줄을 입력하세요.(exit을 입력하면 종료됩니다)"<<endl;
//     while(true){
//         getline(cin, text1);
//         if(text1 == "exit")
//             break;
//         for(int i=text1.length()-1; i>=0; i--){
//             cout<<text1[i];
//         }
//         cout<<endl;
//     }
// }



// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// int main(){
//     string text1;
//     cout<<"아래에 한 줄을 입력하세요.(exit을 입력하면 종료합니다)"<<endl;
//     while(true){
//         getline(cin, text1);
//         if(text1 == "exit")
//             break;
//     reverse(text1.begin(), text1.end());
//     cout<<text1<<endl;
//     }
// }