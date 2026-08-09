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

void copyArray(int arr[100],int arrcopy[100],int leng){
    for(int i=0;i<leng;i++){
        arrcopy[i]=arr[i];
    }
}

int main(){
    srand((unsigned)time(NULL));
    int arr[100];
    int arrcopy[100];
    int lengArray=readPostitiveNumber();
    arrayFill(arr,lengArray);
    printArray(arr,lengArray);
    copyArray(arr,arrcopy,lengArray);
    cout<<"Copy of first array:"<<endl;
    printArray(arrcopy,lengArray);

    return 0;
}