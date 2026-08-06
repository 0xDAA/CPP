#include <iostream>
using namespace std;

int readPositiveNumber(){
    int element;
    do{
        cout<<"How many element you want : ";
        cin>>element;
    } while (element<0);
    return element;
}
void readArray(int arr[100],int elements){
    for(int i=0;i<elements;i++){
        cout<<"Enter Element ["<<i+1<<"] : ";
        cin>>arr[i];
    }
}

void repetedChecker(int arr[100],int elements){
    int element,count=0;
    cout<<"Enter element you want to check : ";
    cin>>element;
    for(int i =0;i<elements;i++){
        if(arr[i]== element){
            count++;
        }
    }
    cout<<"Original Array: ";
    for(int i =0;i<elements;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<element<<" is repeted "<<count<<" time(s)";
}

int main(){
    int arr[100];
    int nOfElements=readPositiveNumber();
    readArray(arr,nOfElements);
    repetedChecker(arr,nOfElements);
    return 0;
}