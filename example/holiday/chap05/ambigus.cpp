#include <iostream>

int sum(int a, int b)
{
    std::cout << "int sum call" << std::endl;
    return a+b;
}

int sum(short a, short b)
{
    std::cout << "short sum call" << std::endl;
    return a+b;
}

int sum(long a, long b)
{
    std::cout << "long sum call" << std::endl;
    return a+b;
}

int sum(double a, double b)
{
    std::cout << "double sum call" << std::endl;
    return a+b;
}

int main()
{
    sum(1, 2);
    sum(1.0, 2.0);

    return 0;
}