#include <iostream>
#include <cstdlib>
using namespace std;

int readPostitiveNumber(string msg){
    int posNum;
    do{
        cout<<msg;
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

string search(int arr[100],int leng,int searchNumber){
    for(int i =0; i<leng;i++){
        if(arr[i]==searchNumber){
            return "The Number "+to_string(searchNumber)+" Founded at index:"+to_string(i)+", order :"+to_string(i+1);
            break;
        }
    }
    return "Not Founded!";
}


int main(){
    srand((unsigned)time(NULL));
    int arr[100];
    int lengArray=readPostitiveNumber("Enter number of elements in array : ");
    arrayFill(arr,lengArray);
    printArray(arr,lengArray);
    int searchNumber= readPostitiveNumber("Enter a number for search : ");
    cout<<search(arr,lengArray,searchNumber);

    return 0;
}