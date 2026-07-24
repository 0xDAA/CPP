#include <iostream>
#include <cmath>
using namespace std;

const int secondsPerDay = 24 * 60 * 60;
const int secondsPerHour = 60 * 60;
const int secondsPerMinute = 60;

void secondsToDHMS(int totalSeconds){
    int days,hours,minutes,seconds,remainder;
    days=floor(totalSeconds/secondsPerDay);
    remainder=totalSeconds % secondsPerDay;
    hours=floor(remainder/ secondsPerHour);
    remainder = remainder % secondsPerHour;
    minutes = floor(remainder/secondsPerMinute);
    remainder= remainder% secondsPerMinute;
    seconds= remainder;
    cout<<days<<':'<<hours<<':'<<minutes<<':'<<seconds<<endl;
}

int main(){
    int seconds;
    cout<<"Enter Seconds : ";
    cin>>seconds;
    secondsToDHMS(seconds);
    return 0;
}