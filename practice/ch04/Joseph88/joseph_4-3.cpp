// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     string text;
//     int count = 0;
//     cout<<"문자열 입력>> ";
//     getline(cin, text, '\n');

//     size_t index = text.find('a');
//     cout<<"a는 몇번째 = "<<index<<endl;

//     while(index != string::npos){
//         count++;
//         index = text.find('a', index+1);
//     }
    
//     cout<<"a의 개수 = "<<count<<endl;
//     cout<<"문자의 개수 = "<<text.length()<<endl;
// }



// #include <iostream>
// #include <string>
// using namespace std;    

// int main(){
//     string text;
//     cout<<"문자열 입력>> ";
//     getline(cin, text, '\n');
//     int count = 0;
//     for(int i=0; i<text.length(); i++){
//         if(text.at(i) == 'a'|| text[i]=='a'){
//             count++;
//         }
//     }   
//     cout<<"a의 개수 = "<<count<<endl;
//     cout<<"문자 개수 = "<<text.length()<<endl;
// }