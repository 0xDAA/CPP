#include <iostream>
using namespace std;

int triangleArea(int a,int h){
    return 0.5*a*h;
}

int main(){
    int a,h;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter h : ";
    cin>>h;

    cout<<"Triangle Area is "<< triangleArea(a,h);
}