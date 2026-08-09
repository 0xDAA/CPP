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
        arr[i]=i+1;
    }
}

void printArrays(int arr1[100],int leng){
    for(int i=0;i<leng;i++){
        cout<<"["<<i+1<<"] : "<<arr1[i]<<endl;
    }
}

void swap(int &A,int &B){
    int temp ;
    temp = A;
    A=B;
    B=temp;
}

void ShuffleArray(int arr1[100],int leng){
    for(int i=0;i<leng;i++){
        swap(arr1[rand()%leng],arr1[rand()%leng]);
    }
}

int main(){
    srand((unsigned)time(NULL));
    int arr[100];
    int lengArray=readPositiveNumber();
    arrayFill(arr,lengArray);
    printArrays(arr,lengArray);
    ShuffleArray(arr,lengArray);
    cout<<"Shuffle:"<<endl;
    printArrays(arr,lengArray);

    return 0;
}