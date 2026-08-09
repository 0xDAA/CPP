#include <iostream>
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

float myFloor(float number){
    if (number > 0){
        return int(number);
    } else {
        if (getFractionNumber(number) ==0){
            return number;
        } else {
            return number-1;
        }
    }
}
int main(){

    cout<<myFloor(10.9);
    cout<<myFloor(readNumber());
}