#include <iostream>
#include <cstdlib>
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

void arrayFill(int arr[100],int leng){
    for(int i=0;i<leng;i++){
        arr[i]=rand()%100;
    }
}

void printArray(int arr[100],int leng){
    for(int i=0;i<leng;i++){
        cout<<"["<<i+1<<"] : "<<arr[i]<<endl;
    }
}

void copyArrayOfPrime(int arr[100],int arrcopy[100],int leng,int &copyLeng){
    int counter=0;
    for(int i=0;i<leng;i++){
        if(checkPrime(arr[i])==enPrimeNot::Prime){
            arrcopy[counter]=arr[i];
            counter++;
        }
    }
    copyLeng=counter--;
}

int main(){
    srand((unsigned)time(NULL));
    int arr[100];
    int arrcopy[100];
    int lengArray=readPositiveNumber();
    arrayFill(arr,lengArray);
    printArray(arr,lengArray);
    int copyLeng=0;
    copyArrayOfPrime(arr,arrcopy,lengArray,copyLeng);
    cout<<"PrimeNuumbers : "<<endl;
    printArray(arrcopy,copyLeng);

    return 0;
}