#include <iostream>
#include <cmath>
using namespace std;

float circleArea(float L){
    return (L*L)/(4*M_PI);
}

int main(){
    float L;
    cout<<"Enter L : ";
    cin>>L;
    cout<<"Circle Area is "<< circleArea(L);
}