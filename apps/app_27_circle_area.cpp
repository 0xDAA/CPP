#include <iostream>
#include <cmath>
using namespace std;

float circleArea(float r){
    return M_PI * pow(r,2);
}

int main(){
    float r;
    cout<<"Enter r : ";
    cin>>r;
    cout<<"Circle Area is "<< circleArea(r);
}