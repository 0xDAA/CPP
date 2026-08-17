#include<iostream>
using namespace std;

void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
}

int main() {
    int a=5,b=10;
    cout<<"Before swap : "<<endl;
    cout<<"a: "<<a<<", b:"<<b<<endl;
    swap(&a,&b);
    cout<<"After swap : "<<endl;
    cout<<"a: "<<a<<", b:"<<b<<endl;

}

