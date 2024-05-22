#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[20];

    cout << "이름 5개 입력 ';': ";
    cin.getline(str, 20);

    char* longestName = nullptr;
    int maxLength = 0;

    char* token = strtok(str, ";");
    while (token != nullptr) {
        int len = strlen(token);
        if (len > maxLength) {
            maxLength = len;
            longestName = token;
        }
        token = strtok(nullptr, ";"); 
    }

    if (longestName != nullptr) {
        cout << "가장 긴 이름 : " << longestName << endl;
    }

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main(){
    char str[10];

    while(true){
        cout<<"종료하고싶으면 yes를 입력하세요 ";
        cin.getline(str, 10);
        if(strcmp(str, "yes")==0){
            cout<<"종료합니다..."<<endl;
            break;
        }
    }

    return 0;
}


#include <iostream>
#include <string>
using namespace std;

int main(){
    char str1[10], str2[10];
    cout<<"새 암호를 입력하세요 : ";
    cin>>str1;
    cout<<"새 암호를 다시 한 번 입력하세요 : ";
    cin>>str2;

    if(strcmp(str1, str2)==0) cout<<"같습니다"<<endl;
    else cout<<"같지 않습니다"<<endl;

    return 0;
}


#include <iostream>
#include <string>
using namespace std;

int main(){
    const int MAX_LENGTH = 100;
    char input[MAX_LENGTH];

    cout<<"문자 입력 : ";
    cin.getline(input, MAX_LENGTH);

    int len = strlen(input);
    int x = 0;

    for(int i=0; i<len; i++){
        if(input[i] == 'x'){
            x++;
        }
    }

    cout<<"x의 개수는 : "<<x<<endl;

    return 0;
}



#include <iostream>
using namespace std;


int main(){
    double number[5];
    double maximum;
    cout<<"실수 5개 입력 : \n";

    for(int i=0; i<5; i++){
        cin>>number[i];
    }

    maximum = number[0];
    for(int i=1; i<5; i++){
        if(number[i]>maximum){
            maximum = number[i];
        }
    }

    cout<<"제일 큰 수 = "<<maximum<<endl;
    
    return 0;
}















// #include <iostream>
// using namespace std;

// int max(int a, int b){
//     if(a>b) return a;
//     else return b;
// }

// int main(){
//     int num1, num2;
//     cout<<"정수 2개 입력 : "<<endl;
//     cin>>num1>>num2;

//     int maximum = max(num1, num2);
//     cout<<"큰 수 = "<<maximum<<endl;
    
//     return 0;
// }