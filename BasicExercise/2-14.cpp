#include <iostream>
#include <string>
using namespace std;

int main()
{
    char coffee[100];
    int num;
    int menu1 = 2000;
    int menu2 = 2300;
    int menu3 = 2500;
    int price = 0;

    while (true)
    {
        int p1 = 0, p2 = 0, p3 = 0; 

        cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << endl;
        cout << "주문>> ";
        cin >> coffee >> num;

        if (strcmp(coffee, "에스프레소") == 0)
        {
            p1 = menu1 * num;
            cout << p1 << "원 입니다. 맛있게 드세요" << endl;
        }
        else if (strcmp(coffee, "아메리카노") == 0)
        {
            p2 = menu2 * num;
            cout << p2 << "원 입니다. 맛있게 드세요" << endl;
        }
        else if (strcmp(coffee, "카푸치노") == 0)
        {
            p3 = menu3 * num;
            cout << p3 << "원 입니다. 맛있게 드세요" << endl;
        }

        price += p1 + p2 + p3;

        if (price >= 22200)
        {
            cout << "오늘 " << price << "원을 판매하여 카페를 닫습니다. 내일 봐요~~" << endl;
            break;
        }
    }
    return 0;
}
