// simple thread example
#include <iostream>
#include <thread>

#define MAX_CNT 10000

void func1(){
    for(int i=0; i<MAX_CNT; i++){
        std::cout << "쓰레드 1 작동중! \n";
    }
}
void func2(){
    for(int i=0; i<MAX_CNT; i++){
        std::cout << "쓰레드 2 작동중! \n";
    }
}
void func3(){
    for(int i=0; i<MAX_CNT; i++){
        std::cout << "쓰레드 3 작동중! \n";
    }
}

int main(){
    std::thread t1(func1);
    std::thread t2(func2);
    std::thread t3(func3);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}