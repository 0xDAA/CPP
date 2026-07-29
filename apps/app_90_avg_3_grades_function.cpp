#include <iostream>
using namespace std; 

void readData(float x[3]){
    cout<<"Enter Grade1 : ";
    cin>>x[0];
    cout<<"Enter Grade2 : ";
    cin>>x[1];
    cout<<"Enter Grade3 : ";
    cin>>x[2];
}

void printData(float x[3]){
    float avg = (x[0]+x[1]+x[2])/3;
    cout<<"The average of grades is : "<<avg;
}

int main(){
    float grades[3];
    readData(grades);
    printData(grades);
}
