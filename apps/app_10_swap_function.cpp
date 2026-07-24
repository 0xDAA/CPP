#include <iostream>
using namespace std;

void swapFunction(int &a,int &b){
    cout<<"A is "<<a<<endl;
    cout<<"B is "<<b<<endl;
    int c=a;
    a=b;
    b=c;
    cout<<"After Swaping:"<<endl;
    cout<<"A is "<<a<<endl;
    cout<<"B is "<<b<<endl;
}
int main(){
    int a=10,b=20;
    swapFunction(a,b);
    cout<<"A is "<<a<<endl;
    cout<<"B is "<<b<<endl;
}