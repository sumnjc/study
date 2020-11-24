// thread 분할 합산

#include <cstdio>
#include <iostream>
#include <thread>
#include <vector>

#define MAX_CNT 100000000

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

    unsigned int result;
    worker(iVector.begin(), iVector.end(), &result);
    return 0;
}