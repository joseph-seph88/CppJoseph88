#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    char buf[10000];
    int count[26] = {0};
    int num = 0;
    cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n";
    cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;
    cin.getline(buf, 10000, ';');

    for(int i=0; buf[i] != ';'; i++){
        buf[i] = tolower(buf[i]);
        if (isalpha(buf[i]) && !isspace(buf[i])){
            num++;
            count[buf[i]-'a']++;
        }
    }
    
    cout<<endl;
    cout<<"총 알파벳 수 : "<<num<<endl;
    cout<<endl;

    for(int i=0; i<26; i++){
        char LOL = 'a' + i;
        cout<<LOL<<"("<<count[i]<<") : ";
        for(int j=0; j<count[i]; j++){
            cout<<"*";
        }
        cout<<endl;
    }

        return 0;
}