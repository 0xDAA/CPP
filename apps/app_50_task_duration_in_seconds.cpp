#include <iostream>
using namespace std;

int durationInSeconds(int days,int hours,int minutes,int seconds){
    return seconds + minutes*60+hours*60*60+days*60*60*24;
}

int main(){
    int days,hours,minutes,seconds;
    cout<<"Enter Days : ";
    cin>>days;
    cout<<"Enter Hours : ";
    cin>>hours;
    cout<<"Enter Minutes : ";
    cin>>minutes;
    cout<<"Enter Seconds : ";
    cin>>seconds;
    cout<<durationInSeconds(days,hours,minutes,seconds);
    return 0;
}