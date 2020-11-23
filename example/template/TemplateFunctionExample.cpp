// Template Function
// 함수 overloading - 로직은 같으나 타입만 다를경우 구현이 비생산적
// Template 함수를 사용하자.

#include <iostream>

template <typename T>
T max(T a, T b){
	return (a > b ? a : b);
}

int main(){
	int i_result;
	double d_result;
	
	i_result = max(1, 2);
	d_result = max(1.1, 2.2);
	
	std::cout << i_result << " " << d_result << std::endl;
	
	return 0;
}