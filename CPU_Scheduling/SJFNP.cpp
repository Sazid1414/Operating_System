#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("sjfinput.txt","r",stdin);
    freopen("sjfoutput.txt","w",stdout);
    int n;
    cin>>n;
    vector<pair<int,int>>process(n);
    for(int i=0;i<n;i++)
    {
        int arrival_time,burst_time;
        cin>>arrival_time>>burst_time;
        process[i]=make_pair(arrival_time,burst_time);
    }
    sort(process.begin(),process.end());
    vector<int>waiting_time(n);
    vector<int>turn_around_time(n);
    vector<int>completion_time(n);
    waiting_time[0]=0;
    turn_around_time[0]=;
    completion_time[0]=0;
    for(int i=1;i<n;i++)
    {
        
    }
}