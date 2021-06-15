#include<iostream>
#include<cstdio>
#include <iomanip>
using namespace std;
class Time{
    int hour;
    int minute;
    int second;
    public:
    Time(long time){
        hour = time/3600;
        time = time%3600;
        minute = time/60;
        time = time%60;
        second = time;
        if(hour>=24){
            hour-=24*(hour/24);
        }
    }
    void getTime(){
        std::cout << std::setw(2) << std::setfill('0') <<hour<<":";
        std::cout << std::setw(2) << std::setfill('0') <<minute<<":";
        std::cout << std::setw(2) << std::setfill('0') <<second;
    }
};
int main()
{
    long int N;
    cin >> N;
    Time currentTime(N);
    currentTime.getTime();
    return 0;
}
