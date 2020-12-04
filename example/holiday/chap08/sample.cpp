// 8장. namespace
#include <iostream>

namespace A {
    struct stInfo{
        int id;
        std::string name;
    };
}

namespace B{
    struct stInfo{
        int age;
        std::string name;
    };
}


int main()
{
    A::stInfo info = {1, "tommy"};

    std::cout << info.id << " : " << info.name << std::endl;
    return 0;
}