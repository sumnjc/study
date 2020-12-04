// 06장. 디폴트 매개변수

#include <iostream>

double CalculateArea(double radius, double radian=2*3.14)
{
    return radius*radius*(radian/2);
}
 
int main()
{
    std::cout<<"반지름이 3인 원의 넓이:";
    std::cout<<CalculateArea(3)<<std::endl;
    std::cout<<"반지름이 3인 반원의 넓이:";
    std::cout<<CalculateArea(3,3.14)<<std::endl;
    return 0;
}