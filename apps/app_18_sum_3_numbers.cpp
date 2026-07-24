#include <iostream>
using namespace std;

int sum3Numbers(int n1,int n2,int n3){
    return n1+n2+n3;
}

int main(){
    int num1,num2,num3;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"Enter third number: ";
    cin>>num3;
    cout<<"Total is "<< sum3Numbers(num1,num2,num3);
}