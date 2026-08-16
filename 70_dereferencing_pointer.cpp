#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int *p;
    p = &a;
    cout<<p<<endl;
    cout<<*p<<endl; // Value of a (10);

    *p=300; // Change value of a to 300
    cout<<a<<endl;
    cout<<*p<<endl;
    return 0;
}

