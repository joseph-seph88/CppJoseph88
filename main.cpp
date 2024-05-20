#include <iostream>
#include <string>


int main(int argc, char const *argv[])
{
    std::cout << "Hello World!!\n";
    std::cout << "안녕하세요" << std::endl;
    std::cout << "반갑습니다." << std::endl;

    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << "You entered: " << number << std::endl;

    std::string greeting;
    std::cout << "Enter a greeting: ";
    std::cin >> greeting; // 사용자로부터 문자열 입력 받기
    std::cout << "Your greeting: " << greeting << std::endl; // 입력받은 문자열 출력



    return 0;
}
