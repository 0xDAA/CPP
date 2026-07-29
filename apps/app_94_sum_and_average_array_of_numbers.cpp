#include <iostream>
using namespace std; 

void readArrayData(int arr[100],int &length){
    cout<<"Enter number of marks to calculate (only from 1 to 100) : ";
    cin>>length;
    for(int i=0; i<length;i++){
        cout<<"Enter number "<<i+1<<" : ";
        cin>>arr[i];
    }
}

void printArrayData(int arr[100],int length){
    for (int i =0;i < length;i++){
        cout<<"Entered Number at ["<<i+1<<"] is : "<<arr[i]<<endl;
    }
}

int calculateArraySum(int arr[100],int length){
    int total=0;
    for (int i =0; i<length;i++){
        total += arr[i];
    }
    return total;
}

float calculateArrayAverage(int arr[100],int length){
    return (float)calculateArraySum(arr,length)/length;
}

int main(){
    int arr[100],length=0;
    readArrayData(arr,length);
    printArrayData(arr,length);
    cout<<"============================\n";
    cout<<"Sum = "<<calculateArraySum(arr,length)<<endl;
    cout<<"Average = "<<calculateArrayAverage(arr,length)<<endl;
    return 0;
}