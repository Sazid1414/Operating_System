#include<bits/stdc++.h>
using namespace std;

int main() {
    freopen("fcfsinput.txt","r",stdin);
    freopen("fcfsoutput.txt","w",stdout);
    int n;
    cin >> n;
    vector<pair<int,int>> process(n);
    for(int i = 0; i < n; i++) {
        int arrival_time, burst_time;
        cin >> arrival_time >> burst_time;
        process[i] = make_pair(arrival_time, burst_time); 
    }
    sort(process.begin(),process.end());
    vector<int> waiting_time(n);
    vector<int> turn_around_time(n);
    vector<int>completion_time(n);
    turn_around_time[0] = process[0].first + process[0].second;
    waiting_time[0] = turn_around_time[0] - process[0].second;
    completion_time[0] = turn_around_time[0];

    for(int i = 1; i < n; i++) {
        if(process[i].first < completion_time[i-1]) {
           completion_time[i] =completion_time[i-1]+process[i].second;
        } else {
            completion_time[i] = process[i].first + process[i].second;
        }
        turn_around_time[i] = completion_time[i] - process[i].first;
        waiting_time[i] = turn_around_time[i] - process[i].second;
    }
    cout << "Process\tCompletionTime\tTurnaround Time\tWaiting Time" << endl;
    for(int i = 0; i < n; i++) {
        cout << i + 1 << "\t\t\t" <<completion_time[i]<<"\t\t\t\t"<< turn_around_time[i] << "\t\t\t\t" << waiting_time[i] << endl;
    }
    cout<<"Gantt Chart :"<<endl;
    cout<<"|";
    for(int i=1;i<=n;i++)
    {
        cout<<"P"<<i<<" | ";
    }
    cout<<endl;
    cout<<"0\t";
    for(int i=0;i<n;i++)
    {
        cout<<completion_time[i]<<"\t ";
    }
    cout<<endl;
    double avg_turn_around_time;
    double avg_waiting_time;
    double total_Turn_around_time=0.0;
    double total_waiting_time=0.0;
    for(int i=0;i<n;i++)
    {
        total_waiting_time+=waiting_time[i];
        total_Turn_around_time+=turn_around_time[i];
    }
    cout<<"Average Turn Around Time :"<<(total_Turn_around_time/n)<<endl;
    cout<<"Average Waiting Time :"<<(total_waiting_time/n)<<endl;
    return 0;
}
