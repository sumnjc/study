#include <iostream>

template <typename T>
class Calculator{
	T result;
public:
	Calculator() {result=0;}
	T addValue(T a, T b) {return (a+b); }
	T minusValue(T a, T b) {return (a-b); }
	T mulValue(T a, T b) {return (a*b); }
	T divValue(T a, T b) {return (a/b); }
};

int main(){
	Calculator <int> nCal;
	Calculator <double> dCal;
	
	std::cout << dCal.addValue(1,1) << std::endl;
	std::cout << dCal.mulValue(2,2) << std::endl;
	
	return 0;
	
}