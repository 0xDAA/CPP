#include <iostream>
#include <cmath>
using namespace std;

float circleArea(float D){
    return (M_PI * pow(D,2))/4;
}

int main(){
    float D;
    cout<<"Enter D : ";
    cin>>D;
    cout<<"Circle Area is "<< circleArea(D);
}