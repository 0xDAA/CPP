#include <iostream>
using namespace std; 

void readThreeNumbers(int &num1,int &num2,int &num3){
    cout<<"Enter Number 1 : ";
    cin>>num1;
    cout<<"Enter Number 2 : ";
    cin>>num2;
    cout<<"Enter Number 3 : ";
    cin>>num3;
}

int sumOfThreeNumbers(int num1,int num2,int num3){
    return num1+num2+num3;
}

void printResult(int total){
    cout<<"Total is : "<<total;
}

int main(){
    int n1,n2,n3;
    readThreeNumbers(n1,n2,n3);
    printResult(sumOfThreeNumbers(n1,n2,n3));
    return 0;
}