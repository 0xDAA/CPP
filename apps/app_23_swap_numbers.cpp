#include <iostream>
using namespace std;


int main(){
    int a,b,c;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Before Swap:"<<endl;
    cout<<"A: "<<a<<" B: "<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<"After Swap:"<<endl;
    cout<<"A: "<<a<<" B: "<<b<<endl;
}