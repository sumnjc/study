// thread 의 변수 공유
//  g++ -o thread2 thread2.cpp -pthread

#include <iostream>
#include <thread>
#include <vector>

void worker(int& counter){
    for(int i=0; i<10000; i++){
        counter += 1;
    }
}

int main(){
    int counter = 0;

    std::vector<std::thread>  workers;
    for(int i=0; i<4; i++){
        workers.push_back(std::thread(worker, std::ref(counter)));
    }

    for (int i=0; i<4; i++){
        workers[i].join();
    }

    std::cout << "Counter 최종 깝: " << counter << std::endl;
}