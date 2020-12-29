// student.h
#pragma once
#include <iostream>

class Student{
    std::string name;
    int peopleId;
    int iq;
    int health;
    int stress;
    int scnt;

    void changeIQ(int num);
    void changeHealth(int num);
    void changeStress(int num);
public:
    Student(std::string _name):name(_name),peopleId(0),health(100),scnt(0) {}
    void DoStudy();
    void DoLesson();
    void DoSleep();
    void DoRelax();
    void DoDrink();
    void DoSing();
    std::string getName() const;
    int getPeopleId() const;
    int getIQ() const;
    int getHealth() const;
    int getStress() const;
};