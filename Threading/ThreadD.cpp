#include<iostream>
#include<thread>
using namespace std;
//This code will produce critical section problem (Race Condition)
long long sum;
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