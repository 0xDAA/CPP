#include <iostream>
#include <cstdlib>
using namespace std;

int readPositiveNumber(){
    int i;
    do{
        cout<<"Enter number of elements : ";
        cin>>i;
    } while(i<0);
    return i;
}

int randomGenerator(int from,int to){
    int random = rand()%(to - from +1)+from;
    return random;
}

void arrayFill(int arr[100],int arrLeng){
    for(int i =0;i <arrLeng;i++){
        arr[i]= randomGenerator(-100,100);
    }
}

void arrayPrint (int arr[100],int arrLeng){
    cout<<"Elements in Array: "<<endl;
    for(int i = 0;i <arrLeng;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void arrayNegativeNumbers (int arr[100],int arrLeng,int &totalNegative){
    for(int i =0 ;i<arrLeng; i++){
        if(arr[i] < 0){
            totalNegative++;
        }
    }
}



int main(){
    srand((unsigned)time(NULL));
    int arr[100],arrLength=readPositiveNumber(),negativeNumbers=0;
    arrayFill(arr,arrLength);
    arrayPrint(arr,arrLength);
    arrayNegativeNumbers(arr,arrLength,negativeNumbers);
    cout<<"Total negative Numbers is : "<<negativeNumbers;

}