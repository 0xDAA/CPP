#include<iostream>
using namespace std;


int main() {
    int * ptrX;
    float * ptrY;

    ptrX = new int;
    ptrY = new float;

    *ptrX= 42;
    *ptrY= 41.5;

    cout<<*ptrX<<endl;
    cout<<*ptrY<<endl;

    delete ptrX;
    delete ptrY;
}

