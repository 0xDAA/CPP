#include <iostream>
#include <cmath>
using namespace std; 

void readParameters(float &a,float &d){
    cout<<"Enter a : ";
    cin>>a; 
    cout<<"Enter d : ";
    cin>>d; 
}

float rectangleArea(float a,float d){
    return a*sqrt(pow(d,2)-pow(a,2));
}

void printResult(float result){
    cout<<"Result is : "<<result;
}
int main(){
    float a,d;
    readParameters(a,d);
    printResult(rectangleArea(a,d));
    return 0;
}