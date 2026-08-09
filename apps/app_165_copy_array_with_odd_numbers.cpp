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
        arr[i]= randomGenerator(1,10);
    }
}

void arrayPrint (int arr[100],int arrLeng){
    cout<<"Elements in Array: "<<endl;
    for(int i = 0;i <arrLeng;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void arrayOddNumbers (int arr[100],int arr2[100],int arrLeng,int &arr2Leng){
    for(int i =0 ;i<arrLeng; i++){
        if(arr[i] % 2 == 1){
            arr2[arr2Leng]=arr[i];
            arr2Leng++;
        }
    }
}

void printArrayOfOddNumbers(int arr2[100],int length){
    cout<<"Array Of Odd Numbers:"<<endl;
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
    arrayOddNumbers(arr,arr2,arrLength,arr2Length);
    printArrayOfOddNumbers(arr2,arr2Length);

}