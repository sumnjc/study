// 템플릿 클래스의 상속 예제

#include <iostream>

template <typename T>
class Base{
	T asset;
public:
	Base(T a){asset=a;}	
	void showBase() {std::cout << "Base asset : " << asset << std::endl;}
};


class Derived : public Base<int> {
	int asset;;
public:
	Derived(int a, int b) : Base<int>(a) {asset = b;}
	void showDerived() {std::cout << "Derived asset : " << asset << std::endl;}
};

int main(){
	Derived D(20, 50);
	D.showBase();
	D.showDerived();
	
	return 0;
}