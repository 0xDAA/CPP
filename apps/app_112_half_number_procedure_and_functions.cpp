#include <iostream>
using namespace std;

float readNumber(){
    cout<<"Enter a number : ";
    float number;
    cin>>number;
    return number;
}

float halfNumber(float number){
    return number/2;
}

void printNumber(float Number){
    cout<<"Half of "<<Number<<" is "<<halfNumber(Number);
}

int main(){
    printNumber(readNumber());
    return 0;
}