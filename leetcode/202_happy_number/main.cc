#include <algorithm>
#include <iostream>
#include <unordered_set>
#include <pthread.h>
#include <cstdio>
using namespace std;

bool isHappy(int n){
    int k=n;
    unordered_set<int> us;
    while(n>9){
        if(us.find(n)!=us.end()) break;
        us.insert(n);
        int m=0;
        while(n){
            m+=(n%10)*(n%10);
            n/=10;
        }
        n=m;
    }
    printf("%d: %d\n", k, n);
    return n==1||n==7;
}
const int num_thread=1;
void* checking(void* t){
    long cnt=(long)t;
    int start=100/num_thread*cnt;
    int end=100/num_thread*(cnt+1);
    for (int i = start; i < end; ++i)
    {
        isHappy(i);
    }
    pthread_exit(NULL);
}


int main(int argc, char const *argv[])
{
    pthread_t threads[num_thread];
    long t;
    for(int i=0; i<num_thread; ++i){
        t=i;
        int rc=pthread_create(&threads[i], NULL, checking, (void*)t);
        if(rc){
            printf("Error: return code from pthread_create is %d\n", rc);
            exit(-1);
        }
    }
    void* status;
    for (int i = 0; i < num_thread; ++i)
    {
        int rc=pthread_join(threads[i], &status);
        if(rc){
            printf("Error:\n");
            exit(-1);
        }
        printf("Main: complete join with thread\n");
    }
    return 0;
}