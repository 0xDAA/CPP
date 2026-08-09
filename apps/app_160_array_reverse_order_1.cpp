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

void arrayFill(int arr[100],int leng){
    for(int i=0;i<leng;i++){
        arr[i]=rand()%100;
    }
}

void copyReverse(int arr[100],int arr2[100],int leng){
    int it=0;
    for(int i=leng-1;i >=0;i--){
        arr2[it]=arr[i];
        it++;
    }
}

void printArrays(int arr1[100],int leng){
    for(int i=0;i<leng;i++){
        cout<<"["<<i+1<<"] : "<<arr1[i]<<endl;
    }
}


int main(){
    srand((unsigned)time(NULL));
    int arr[100];
    int arr2[100];
    int lengArray=readPositiveNumber();
    arrayFill(arr,lengArray);
    printArrays(arr,lengArray);
    cout<<"Reverse order: "<<endl;
    copyReverse(arr,arr2,lengArray);
    printArrays(arr2,lengArray);

    return 0;
}