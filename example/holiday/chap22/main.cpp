#include "student.h"

int main(){
    Student s1("홍길동");
    s1.DoStudy();

    std::cout << "Name: " << s1.getName() << std::endl;
    std::cout << "People ID: " << s1.getPeopleId() << std::endl;
    std::cout << "Health: " << s1.getHealth() << std::endl;
    std::cout << "IQ: " << s1.getIQ() << std::endl;
    std::cout << "Stress: " << s1.getStress() << std::endl;

    return 1;
}