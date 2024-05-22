
#include <iostream>
#include "Account.h"
using namespace std;



int main(){
    Account kuk("kitae", 1, 5000);

    kuk.deposit(50000);
    cout<<kuk.getOwner()<<"의 잔액은 "<<kuk.inquiry()<<endl;
    kuk.withdraw(20000);
    cout<<kuk.getOwner()<<"의 잔액은 "<<kuk.inquiry()<<endl;

    return 0;
}





// #include <iostream>
// using namespace std;

// int sum(int a, int b){
//     int k, res=0;
//     for(k=a; k<=b; k++){
//         res += k;   
//     }
//     return res;
// }

// int main(){
//     int n=0;
//     cout<<"끝 수를 입력하세요 : ";
//     cin>>n;
//     cout<<"1에서 "<<n<<"까지의 합은 "<<sum(1, n)<<"입니다"<<endl;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main(){
    
//     int k, n = 0;
//     int sum = 0;

//     cout<<"끝 수를 입력하세요";
//     cin>>n;
//     for(k=1; k<=n; k++){
//         sum += k;
//     }
//     cout<<"1에서 "<<n<<"까지의 합은"<<sum<<"입니다"<<endl;

//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// int main(int argc, char *argv[]){
//     string str;
//     cout<<"문자열 입력 : ";
//     cin>>str;
//     for(int i=0; i<str.length(); i++){
//         for(int j=0; j<=i; j++){
//             cout << str[j];
//         }
//         cout<<endl;
//     }

//     return 0;
// }


// #include <iostream>
// #include <string>
// #include <cstring>
// using namespace std;

// int main(){
//     char str2[20];

//     cout<<"문자열 입력 : ";
//     cin>>str2;
//     int len = strlen(str2);

//     for(int i=0; i<len; i++){
//         cout<<str2[i]<<endl;
//     }

//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     string str1;
//     string str2;

//     cout<<"새 암호 입력 : ";
//     cin>>str1;
    
//     cout<<"새 암호를 다시 한 번 입력 : ";
//     cin>>str2;

//     if(str1 == str2)
//         cout<<"같습니다";
//     else
//         cout<<"같지 않습니다";


//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     string str;
//     string address = "www.google.com";
//     string *paddr = &address;

//     char text[]= "Hello World:)";
//     string title(text);
//     string *ptext = new string(text);
//     string *p = new string("Hello World!");

//     cout << *p << endl;
//     cout << p->append("@").insert(5, " joseph").replace(0, 5, "Halo").size();
//     cout << *p << endl;
//     cout << p->compare("Hello World!") << endl;

//     return 0;
// }