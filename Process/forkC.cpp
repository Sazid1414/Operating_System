#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Process "<<endl;
    if(fork()&&fork())
    {
        cout<<"Inside if "<<endl;
        fork();
        cout<<"Exiting if "<<endl;
    }
    cout<<"fork()"<<endl;
}