#include<iostream>
#include<thread>
#include<map>
#include<string>
#include<chrono>
using namespace std::chrono_literals;
using namespace std;
void refreshForcast(map<string,int>forcastMap)
{
    while(true){
    for(auto it:forcastMap)
    {
        it.second+=1;
        cout<<it.first<<" "<<it.second<<endl;
    }
    this_thread::sleep_for(20000ms);
    }
}
int main()
{
    map<string,int>forcastMap={{"New York",15},{"Uttara",25},{"Berlin",22}};
    thread worker(refreshForcast,forcastMap);
    worker.join();
    system("pause>nul");
}