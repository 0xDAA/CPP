#include <iostream>
using namespace std;

float hoursToWeeks(float hours){
    return (hours/24)/7;
}

float hoursToDays(float hours){
    return (hours/24);
}

void convertHours(float hours){
    cout<< hoursToWeeks(hours)<<" Weeks"<<endl;
    cout<< hoursToDays(hours)<<" Days"<<endl;
}
int main(){
    float hours;
    cout<<"Enter hours to convet : ";
    cin>>hours;
    convertHours(hours);
    return 0;
}