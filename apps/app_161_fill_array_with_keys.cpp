#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

enum enPrimeNot {Prime=1,NotPrime=2};

int readPositiveNumber(){
    int number;
    do {
        cout<<"Enter a positive number: ";
        cin>>number;
    }while (number <0);
    return number;
}

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
string blockHash(){
    string keyBlock="";
    keyBlock = keyBlock +char(RandomNumber(65,90))+char(RandomNumber(65,90))+char(RandomNumber(65,90))+char(RandomNumber(65,90));
    return keyBlock;
}

string serialKey(){
    string key="";
    key=blockHash()+"-"+blockHash()+"-"+blockHash()+"-"+blockHash();
    return key;
}



void arrayFill(string arr[100],int leng){
    for(int i=0;i<leng;i++){
        arr[i]=serialKey();
    }
}


void printArrays(string arr1[100],int leng){
    for(int i=0;i<leng;i++){
        cout<<"["<<i+1<<"] : "<<arr1[i]<<endl;
    }
}


int main(){
    srand((unsigned)time(NULL));
    string arr[100];
    int lengArray=readPositiveNumber();
    arrayFill(arr,lengArray);
    printArrays(arr,lengArray);

    return 0;
}