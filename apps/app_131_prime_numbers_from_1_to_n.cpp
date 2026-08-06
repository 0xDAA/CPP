#include <iostream>
#include <cmath>
using namespace std;

enum enPrimeNot {Prime=1,NotPrime=2};

int readPositiveNumber(){
    int number;
    do {
        cout<<"Enter a positive number: ";
        cin>>number;
    }while (number <0);
    return number;
}

enPrimeNot checkPrime(int number){
    int M = round(number/2);
    for(int counter = 2; counter <=M;counter++){
        if(number % counter ==0){
            return enPrimeNot::NotPrime;
        }
    }
    return enPrimeNot::Prime;
}

void printNumberType(int number){
    if(checkPrime(number) == enPrimeNot::Prime){
        cout<<"Number: "<<number<<" is prime"<<endl;
    }else{
        cout<<"Number: "<<number<<" is not prime"<<endl;
    }
}
void printNumbersType(int to){
    for (int i =1;i <=to;i++){
        printNumberType(i);
    }
}
int main(){
    printNumbersType(readPositiveNumber());
    return 0;
}