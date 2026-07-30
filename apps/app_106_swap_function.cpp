#include <iostream>
using namespace std; 

void readNumbers(int &n1,int &n2){
    cout<<"Enter n1: ";
    cin>>n1;
    cout<<"Enter n2: ";
    cin>>n2;
}

void printBeforeSwap (int n1,int n2){
    cout<<"N1 BeforeSwap : "<<n1<<endl;
    cout<<"N2 BeforeSwap : "<<n2<<endl;
}

void swapNumbers(int &n1,int &n2){
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

void printAfterSwap (int n1,int n2){
    cout<<"N1 AfterSwap : "<<n1<<endl;
    cout<<"N2 AfterSwap : "<<n2<<endl;
}

int main(){

    int n1,n2;
    readNumbers(n1,n2);
    printBeforeSwap(n1,n2);
    swapNumbers(n1,n2);
    printAfterSwap(n1,n2);

    return 0;
}