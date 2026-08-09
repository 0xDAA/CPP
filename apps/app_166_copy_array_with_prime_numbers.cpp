#include <iostream>
#include <cstdlib>
#include <cmath>
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
        arr[i]= randomGenerator(1,100);
    }
}

void arrayPrint (int arr[100],int arrLeng){
    cout<<"Elements in Array: "<<endl;
    for(int i = 0;i <arrLeng;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool checkPrime(int number){
    int M = round(number/2);
    for (int counter=2; counter <= M; counter++){
        if(number % 2 ==0){
            return false;
        }
    }
    return true;
}

void arrayPrimeNumbers (int arr[100],int arr2[100],int arrLeng,int &arr2Leng){
    for(int i =0 ;i<arrLeng; i++){
        if(checkPrime(arr[i])){
            arr2[arr2Leng]=arr[i];
            arr2Leng++;
        }
    }
}

void printArrayOfPrimeNumbers(int arr2[100],int length){
    cout<<"Array Of Prime Numbers:"<<endl;
    for (int i=0;i<length;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
}



int main(){
    srand((unsigned)time(NULL));
    int arr[100],arrLength=readPositiveNumber();
    int arr2[100],arr2Length=0;
    arrayFill(arr,arrLength);
    arrayPrint(arr,arrLength);
    arrayPrimeNumbers(arr,arr2,arrLength,arr2Length);
    printArrayOfPrimeNumbers(arr2,arr2Length);

}