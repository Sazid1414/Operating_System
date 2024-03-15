#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number of Processes: " << endl;
    cin >> n;
    vector<pair<int,int>> process(n);
    for(int i = 0; i < n; i++)
    {
        cout << "Enter Data of Process " << i + 1 << " : " << endl;
        int arrival_time;
        int burst_time;
        cin >> arrival_time >> burst_time;
        process[i] = make_pair(arrival_time, burst_time); 
    }

    return 0;
}
