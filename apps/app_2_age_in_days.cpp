#include <iostream>
using namespace std;

int main(){
    int yearOfBirth;
    cout<<"Enter your birth year: ";
    cin >> yearOfBirth;
    int age_in_days= (2026-yearOfBirth) * 365;
    cout<<"Your age is : "<<age_in_days<<" Day!." ;// (Current Year - YOB)
    return 0;
}