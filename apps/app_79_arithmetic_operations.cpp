#include <iostream>
#include <cmath>
using namespace std;

void arithmeticOperations(int a,int b){
    cout<<a<<" + "<<b<<" = "<<a+b<<endl;
    cout<<a<<" - "<<b<<" = "<<a-b<<endl;
    cout<<a<<" * "<<b<<" = "<<a*b<<endl;
    cout<<a<<" / "<<b<<" = "<<a/b<<endl;
    cout<<a<<" % "<<b<<" = "<<a%b<<endl;
}

int main(){
    int a,b;
    cout<<"Enter the first number (A) : ";
    cin>>a;
    cout<<"Enter the second number (B) : ";
    cin>>b;

    arithmeticOperations(a,b);
    return 0;
}