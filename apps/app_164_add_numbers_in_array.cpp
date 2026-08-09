#include <iostream>
using namespace std;

int readPostitiveNumber(string msg){
    int posNum;
    do{
        cout<<msg;
        cin>>posNum;
    } while(posNum<0);
    return posNum;
}

void printArray(int arr[100],int leng){
    for(int i=0;i<leng;i++){
        cout<<"["<<i+1<<"] : "<<arr[i]<<endl;
    }
}
void addNumber(int arr[100],int &index);
void askUser(int arr[100],int index){
    int userInput=readPostitiveNumber("Do you want add more numbers ? (1/0): ");
    if(userInput == 1){
        addNumber(arr,index);
    } else {
        printArray(arr,index);
    }
}

void addNumber(int arr[100],int &index){
    arr[index]=readPostitiveNumber("Enter a number: ");
    index++;
    askUser(arr,index);
}

int main(){
    int arr[100];
    int index=0;
    askUser(arr,index);
    return 0;
}