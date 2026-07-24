#include <iostream>
using namespace std;

int maxTwoNumbers(int num1,int num2,int num3){
    if (num1 >num2) {
        if( num1> num3) {
            return num1;
        } else {
            return num3;
        }
    } else if(num2> num3) {
        return num2;
    } else {
        return num3;
    }
}

int main(){
    int a,b,c;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter three number: ";
    cin>>c;
    cout<<"Max number is : "<<maxTwoNumbers(a,b,c);
}