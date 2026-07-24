#include <iostream>
#include <cmath>
using namespace std;

float circleArea(float A){
    return (M_PI * pow(A,2))/4;
}

int main(){
    float A;
    cout<<"Enter A : ";
    cin>>A;
    cout<<"Circle Area is "<< circleArea(A);
}