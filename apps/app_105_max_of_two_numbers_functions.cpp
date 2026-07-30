#include <iostream>
using namespace std; 

void readNumbers(int &num1, int &num2){
    cout<<"Enter Number1 : ";
    cin>>num1;
    cout<<"Enter Number2 : ";
    cin>>num2;
}

int maxOf2Numbers(int num1,int num2){
    if (num1 > num2)
        return num1;
    else
        return num2;
}

void printResult(int Max){
    cout<<"The Max number is "<<Max;
}
int main(){
    int n1,n2;
    readNumbers(n1,n2);
    printResult(maxOf2Numbers(n1,n2));
    return 0;
}