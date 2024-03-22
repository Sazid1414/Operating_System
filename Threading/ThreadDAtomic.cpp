#include<iostream>
#include<thread>
#include <atomic>
using namespace std;
//This code will produce critical section problem (Race Condition)
atomic<long long>sum;//Atomic Operation it is not available in all language
void taskA()
{
    for(int i=0;i<1000000;i++)
    {
        sum++;
    }   
}
int main()
{
    thread t1(taskA);
    thread t2(taskA);
    t1.join();
    t2.join();
    cout<<sum<<endl;
}