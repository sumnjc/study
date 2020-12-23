// static keyword 예제

#include <iostream>

class Student{
    int grade;
    std::string name;

public:
    static int seq; // 인스턴스와 무관하게 class에 대한 정보를 저장할때 static 변수를 사용한다.

    Student(int _grade, std::string _name)
    {
        grade = _grade;
        name = _name;
        seq ++;
    }
    ~Student()
    {
        seq --;
    }
    void getInfo(){
        std::cout << "seq:" << seq << std::endl;
        std::cout << "grade:" << grade << std::endl;
        std::cout << "name:" << name << std::endl;
    }
};

int Student::seq = 0;   // static 변수는 class 밖에서도 선언 및 초기화를 해줘야 한다.

int main()
{
    Student* student1 = new Student(1,"홍길동");
    Student* student2 = new Student(2,"이순신");

    student1->getInfo();
    student2->getInfo();

    delete student2;
    
    student1->getInfo();

    return 0;
}