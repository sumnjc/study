// student.cpp
#include "student.h"

/*
class Student{
    std::string name;
    int peopleId;
    int iq;
    int health;
    int stress;
    int scnt

public:
    Student(std::string _name):name(_name),health(100),scnt(0)
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
*/
void Student::changeIQ(int num)
{
    iq += num;
    if(iq<0) iq=0;
    if(iq>200) iq=200;
}
void Student::changeHealth(int num)
{
    health += num;
    if(health<0) health=0;
    if(health>200) health=200;
}
void Student::changeStress(int num)
{
    stress += num;
    if(stress<0) stress=0;
    if(stress>100) stress=100;
}
void Student::DoStudy()
{
    scnt++;
    changeHealth(-5);
    changeIQ(scnt);
    changeStress(-2);
}

void Student::DoLesson()
{
    changeHealth(-3);


}

void Student::DoSleep()
{

}

void Student::DoRelax()
{

}
void Student::DoDrink()
{

}
void Student::DoSing()
{

}
std::string Student::getName() const
{
    return name;
}
int Student::getPeopleId() const
{
    return peopleId;
}
int Student::getIQ() const
{
    return iq;
}
int Student::getHealth() const
{
    return health;
}
int Student::getStress() const
{
   return stress; 
}