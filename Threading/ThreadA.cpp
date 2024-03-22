#include <iostream>
#include <thread>
using namespace std;

void function1(char symbol) {
    try {
        for (int i = 0; i < 200; i++) {
            cout <<symbol;
        }
    } catch (const exception& e) {
        cerr << "Exception in Function1: " << endl;
    }
}

void function2(char symbol) {
    try {
        for (int i = 0; i < 200; i++) {
            cout << symbol;
        }
    } catch (const exception& e) {
        cerr << "Exception in Function2: "<< endl;
    }
}

int main() {
    thread worker1(function1,'+');
    thread worker2(function2,'-');
    //worker1.join(); // Wait for worker1 to finish
    //worker2.join(); // Wait for worker2 to finish

    return 0;
}
