// student.cpp
#include "student.h"


const int Student::max_hp = 200;    //정적 상수 멤버변수의 초기화는 클래스 밖에서 한다.
Student::Student(int _num, string _name):num(_num) //비정적 상수 멤버변수의 초기화는 생성자에서 한다.
{
    name = _name;
    hp = 0;
}

void Student::View()const
{
    cout << "번호:" << num <<"이름:" << name << "HP:" << hp << endl;
    // hp = 10; <- read only compile error.
}