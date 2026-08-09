#include <iostream>
#include <cmath>
using namespace std;

float readNumber(){
    float num;
    cout<<"Enter a number : ";
    cin>>num;
    return num;
}

float getFractionNumber(float number){
    return number-int(number);
}

float myRound(float number){
    if (abs(getFractionNumber(number))>=0.5){
        if (number >0){
            return (int)number+1;
        } else {
            return (int)number-1;
        }
    } else {
        return (int)number;
    }
}
int main(){
    cout<<myRound(145.5)<<endl;
    cout<<myRound(145.49)<<endl;
    cout<<myRound(50.7)<<endl;
    cout<<myRound(-10.5)<<endl;
    cout<<myRound(readNumber())<<endl;
}