#include <iostream>
using namespace std;

float halfNumber(float num){
    return num/2;
}

int main(){
    float number;
    cout<<"Enter your number: ";
    cin>>number;
    cout<<"Half number of "<<number<< " is "<<halfNumber(number);
}