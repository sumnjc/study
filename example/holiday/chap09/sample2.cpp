// return type 이 레퍼런스인 경우
#include <iostream>

int& RefTest(int &ref)
{
    ref++;
    return ref;
}

int main()
{
    int val1 = 1;
    int val2 = RefTest(val1); // 2 받는 변수가 일반변수이면 레퍼런스 변수가 가리키는 깞이 들어간다.
    int& val3 = RefTest(val1); // alias 가 하나 더생김.

    val1++;
    val2++;
    val3++;

    std::cout << "val1 :" << val1 << std::endl; // 5
    std::cout << "val2 :" << val2 << std::endl; // 3
    std::cout << "val3 :" << val3 << std::endl; // 5

    return 0;
}