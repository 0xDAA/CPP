#include <iostream>
#include <cmath>
using namespace std;

float readNumber(){
    float num;
    cout<<"Enter a number : ";
    cin>>num;
    return num;
}

float mySqrt(float number){
    return pow(number,0.5);
}

int main(){
    cout<<mySqrt(9)<<endl;
    cout<<mySqrt(25)<<endl;
    cout<<mySqrt(readNumber())<<endl;

}