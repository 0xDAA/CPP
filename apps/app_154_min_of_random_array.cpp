#include <iostream>
#include <cstdlib>
using namespace std;

int readPostitiveNumber(){
    int posNum;
    do{
        cout<<"Enter number of elements: ";
        cin>>posNum;
    } while(posNum<0);
    return posNum;
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

int minNumber(int arr[100],int leng){
    int min=arr[0];
    for(int i=0;i<leng;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}


int main(){
    srand((unsigned)time(NULL));
    int arr[100];
    int lengArray=readPostitiveNumber();
    arrayFill(arr,lengArray);
    printArray(arr,lengArray);
    cout<<"Min number is "<<minNumber(arr,lengArray);
    return 0;
}