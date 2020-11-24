// thread 분할 합산

#include <cstdio>
#include <iostream>
#include <thread>
#include <vector>
#include <time.h>

#define MAX_CNT 100000000
#define THREAD_CNT 2

using std::thread;
using std::vector;

void worker(vector<int>::iterator start, vector<int>::iterator end, unsigned int* result){
    unsigned int sum = 0;
    for(auto itr = start; itr < end; ++itr){
        sum += *itr;
    }
    *result = sum;

    thread::id this_id = std::this_thread::get_id();
    printf("thread %x, %d ~ %d -> %d\n", this_id, *start, *(end-1), sum);
}

int main(){
    vector<int> iVector(MAX_CNT);
    for(int i=0; i<MAX_CNT; i++){
        iVector[i] = i;
    }

    unsigned int total = 0;
    clock_t start = clock();
#if 0
    worker(iVector.begin(), iVector.end(), &total);
    std::cout << "전체 합: " << total << std::endl;
#else
    vector<unsigned int> partial_sums(THREAD_CNT);

    vector<thread> workers;
    for(int i=0; i<THREAD_CNT; i++){
        workers.push_back(thread(worker, iVector.begin()+i*(MAX_CNT/THREAD_CNT),
                                iVector.begin()+(i+1)*(MAX_CNT/THREAD_CNT), &partial_sums[i]));
    }
    for (int i=0; i<THREAD_CNT; i++){
        workers[i].join();
    }

    for (int i=0; i<THREAD_CNT; i++){
        total += partial_sums[i];
    }
    std::cout << "전체 합: " << total << std::endl;
#endif
    clock_t end = clock();

    std::cout << "elapsed time : " << (double)(end-start)/CLOCKS_PER_SEC << std::endl;
    return 0;
}