#include<iostream>
#include<thread>
#include<unistd.h>
using namespace std;
void taskA()
{
    for(int i=0;i<10;i++)
    {
        sleep(1);
        cout<<"TaskA:"<<i<<endl;
        fflush(stdout);
    }
}
void taskB()
{
  for(int i=0;i<10;i++)
    {
        sleep(1);
        cout<<"TaskB:"<<i<<endl;
        fflush(stdout);
    }
}
int main()
{
    freopen("ThreadOutput.txt","w",stdout);
    thread t1(taskA);
    thread t2(taskB);
    t1.join();
    t2.join();
}