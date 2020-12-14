// c++ 에서의 캡슐화.

#include <iostream>
#include <string>
using namespace std;

class Unit
{
    // 디폴트로 접근범위 private
    int num;
    string name;
    int hp;

public:
    Unit(int _num, string _name)
    {
        num = _num;
        name = _name;
        hp = 100;
    }
    void Train(int hour)
    {
        cout << num << "번 유닛(" << name << ") 훈련하다" << endl;
        hp += hour;
    }
    void View()
    {
        cout << num <<"번, 유닛 이름:" << name << ", 체력:" << hp << endl;
    }
};

int main()
{
    Unit unit(3, "홍길동");
    unit.Train(100);
    unit.View();
    //unit.hp += 1000; // 가시성을 차단하여 멤버변수에 직접 접근 못함.
    return 0;
}