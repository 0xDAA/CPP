#include <iostream>
#include <cstdlib>
using namespace std;

void arrayFill(int arr[100]){
    for(int i=0;i<100;i++){
        arr[i]=rand()%100;
    }
}

void printArray(int arr[100]){
    for(int i=0;i<100;i++){
        cout<<"["<<i+1<<"] : "<<arr[i]<<endl;
    }
}

int main(){
    srand((unsigned)time(NULL));
    int arr[100];
    arrayFill(arr);
    printArray(arr);
    return 0;
}