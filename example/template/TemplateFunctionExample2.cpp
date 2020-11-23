// Template Function Specialize 예제

#include <iostream>

template <typename T>
T area(T a, T b)
{
	std::cout << "i'm normal template function" << std::endl;
	return a * b;
}

// Template 함수의 Specialize
// 두번째 인자가 double 이면 아래 함수가 불려짐.
template <typename T>
double  area(T a, double b)
{
	std::cout << "i'm double template function" << std::endl;
	return a * a * b;	
}

int main()
{
	std::cout  <<  area(2, 2) << std::endl;
	std::cout  <<  area(2, 2.2) << std::endl;
	return 0;
}