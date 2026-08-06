#include <iostream>
#include <cmath>
using namespace std;

enum enPrimeNot{Prime=1,NotPrime=2};
int readPositiveNumber(){
    int read;
    do {
        cout<<"Enter a positie number: ";
        cin>>read;
    }while (read<0);
    return read;
}

enPrimeNot primeNumber(int number){
    int M = round(number/2);
    for (int counter=2; counter <= M; counter++){
        if(number % 2 ==0){
            return enPrimeNot::NotPrime;
        }
    }
    return enPrimeNot::Prime;
}

void printPrimeNumber(int num){
    if(primeNumber(num)== enPrimeNot::Prime){
        cout<<"Prime Number";
    } else {
        cout<<"Not Prime at all";
    }
}

int main(){
    printPrimeNumber(readPositiveNumber());
    return 0;
}