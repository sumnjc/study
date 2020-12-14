#include <iostream>
#include <string>
using namespace std;

class Student
{
    int num;
    string name;
    int iq;

public:
    Student(int num, string name)
    {
        this->num = num;
        this->name = name;
        this->iq = 100;
    }

    void Study()
    {
        cout<<name << "학생 공부하다." << endl;
        iq++;
    }

    void View()
    {
        cout <<"번호:" <<num <<"이름:" << name;
    }
};

int main()
{
    Student *stu = new Student(3, "홍길동"); 
    stu->Study();
    stu->View();
    delete stu;
    return 0;
}