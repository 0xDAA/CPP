#include<iostream>
using namespace std;


int main() {
    int num;
    float * ptrArray;

    cout<<"Enter number of students :";
    cin>>num;
    ptrArray = new float[num];

    for (int i = 0; i<num;i++){
        cout<<"Enter mark of student "<<i+1<<" : ";
        cin>> *(ptrArray + i);
    }

    cout<<"Student marks: "<<endl;
    for (int i = 0; i<num;i++){
        cout<<"Student "<<i+1<<" : "<<*(ptrArray+i)<<endl;
    }

    delete[] ptrArray;
}

