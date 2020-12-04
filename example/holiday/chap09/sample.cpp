#include <iostream>

int main()
{
    int a = 10;
    int b = 20;
    int &ref = a;

    std::cout << "a:" << a << std::endl;
    std::cout << "ref:" << ref << std::endl;

    // 주소깝을 찍어보면 참조한 변수의 주소가 찍힌다.
    std::cout << "address of a:" << &a << std::endl;
    std::cout << "address of ref:" << &ref << std::endl;

    ref = b;    // 변수 b 의 참조로 교체되었다.
    std::cout << "b:" << b << std::endl;
    std::cout << "ref:" << ref << std::endl;

    std::cout << "address of b:" << &b << std::endl;
    std::cout << "address of ref:" << &ref << std::endl;



    return 0;
}