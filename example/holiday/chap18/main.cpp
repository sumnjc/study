// main.cpp

#include "student.h"

int main()
{
    Student *stu = new Student(3, "홍길동");
    stu->View();
    delete stu;
    return 0;
}