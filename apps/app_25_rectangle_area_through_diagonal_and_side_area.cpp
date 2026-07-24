#include <iostream>
#include <cmath>
using namespace std;

float rectangleArea(float a,float d){
    return a*sqrt(pow(d,2)-pow(a,2));
}

int main(){
    float a,d;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter d: ";
    cin>>d;

    cout<<"Rectangle Area is " <<rectangleArea(a,d);
}