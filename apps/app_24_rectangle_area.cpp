#include <iostream>
using namespace std;

int rectangleArea(int a,int b){
    return a*b;
}

int main(){
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    cout<<"Rectangle Area of "<<a<<" and "<<b <<" is "<< rectangleArea(a,b);
}