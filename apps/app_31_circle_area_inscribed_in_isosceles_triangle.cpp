#include <iostream>
#include <cmath>
using namespace std;

float circleArea(float a,float b){
    return (M_PI *(pow(b,2)/4)*((2*a-b)/(2*a+b)));
}

int main(){
    float a,b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<"Circle Area is "<< circleArea(a,b);
}