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

void printArrays(int arr1[100],int arr2[100],int arr3[100],int leng){
    for(int i=0;i<leng;i++){
        cout<<"["<<i+1<<"] : "<<arr1[i]<<" + "<<arr2[i]<<" = "<<arr3[i]<<endl;
    }
}

void sumTwoArray(int arr1[100],int arr2[100],int arr3[100],int leng){
    for(int i=0;i<leng;i++){
        arr3[i]=arr1[i]+arr2[i];
    }
}

int main(){
    srand((unsigned)time(NULL));
    int arr[100];
    int arr2[100];
    int arr3[100];
    int lengArray=readPositiveNumber();
    arrayFill(arr,lengArray);
    arrayFill(arr2,lengArray);
    sumTwoArray(arr,arr2,arr3,lengArray);
    printArrays(arr,arr2,arr3,lengArray);

    return 0;
}