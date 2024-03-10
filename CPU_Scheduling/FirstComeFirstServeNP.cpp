#include<bits/stdc++.h>
using namespace std;

class Process {
public:
    int processNum;
    int burstTime;
    int arrivalTime;
    int completionTime;

    Process(int processNum, int burstTime, int arrivalTime) {
        this->processNum = processNum;
        this->burstTime = burstTime;
        this->arrivalTime = arrivalTime;
        this->completionTime = 0;
    }
};

class FCFS {
public:
    void schedule(vector<Process>& p) {
        sort(p.begin(), p.end(), [](const Process &a, const Process &b) {
            return a.arrivalTime < b.arrivalTime;
        });

        int currentTime = 0;
        for (Process &process : p) {
            if (process.arrivalTime > currentTime) {
                currentTime = process.arrivalTime;
            }
            process.completionTime = currentTime + process.burstTime;
            currentTime = process.completionTime;
        }
    }

 void displayResult(const vector<Process>& p) {
    cout << "Process\tArrival Time\tBurst Time\tCompletion Time\n";
    for (const Process &process : p) {
        cout << "p " << process.processNum << ":\t" << process.arrivalTime << "\t\t"
             << process.burstTime << "\t\t" << process.completionTime << endl;
    }
}
};

int main() {
    int num_of_process;
    cout << "Enter Number of Processes: ";
    cin >> num_of_process;

    vector<Process> p;
    for (int i = 1; i <= num_of_process; i++) {
        int arrival_time, burst_time;
        cout << "Enter arrival time and burst time for process " << i << ": ";
        cin >> arrival_time >> burst_time;

        if (arrival_time < 0 || burst_time < 1) {
            cout << "Invalid input. Please enter non-negative arrival time and burst time greater than 0." << endl;
            return 1; // Exit with an error code
        }

        p.push_back(Process(i, arrival_time, burst_time));
    }

    FCFS scheduler;
    scheduler.schedule(p);
    scheduler.displayResult(p);

    return 0;
}
