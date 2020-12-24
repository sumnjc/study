// student.h
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student
{
    const int num;      // 비정적 멤버필드의 상수화
    string name;
    int hp;
    static const int max_hp;       // 정적 멤버필드의 상수화
public:
    Student(int _num, string _name);
    void View() const;  // 상수화 멤버 메서드.
};