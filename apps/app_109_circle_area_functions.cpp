#include <iostream>
using namespace std; 

float readCircleRad(){

    float r;
    cout<<"Enter r: ";
    cin>>r;
    return r;

}

float calculateCircleArea(float r){
    const float PI = 3.14;
    return PI*r*r;
}

void printResult(float Area){
    cout<<"Area is : "<<Area;
}
int main(){;

    printResult(calculateCircleArea(readCircleRad()));
    return 0;
}