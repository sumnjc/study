#include <iostream>

class hello
{
private:
    /* data */
public:
    hello(/* args */);
    ~hello();

    void sayhello();
};

hello::hello(/* args */)
{
}

hello::~hello()
{
}

void hello::sayhello(){
    std::cout << "Hello. 안녕" << std::endl;
}

int main(){
    hello greeting  = hello();
    greeting.sayhello();
    return 0;
}