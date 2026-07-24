#include <iostream>
#include <cmath>
using namespace std;

float circleArea(float a,float b,float c){
    float p=(a+b+c)/2;
    return (M_PI *pow(((a*b*c)/(4*sqrt(p*(p-a)*(p-b)*(p-c)))),2));
}

int main(){
    float a,b,c;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<"Enter c : ";
    cin>>c;
    cout<<"Circle Area is "<< circleArea(a,b,c);
}