#include <iostream>
using namespace std; 

void readNumbers(float &A,float &H){
    cout<<"Enter A: ";
    cin>>A;
    cout<<"Enter H: ";
    cin>>H;
}

float calculateTriangleArea(float A,float H){
    return (A/2)*H;
}

void printResult(float Area){
    cout<<"Area is : "<<Area;
}
int main(){;

    float A,H;
    readNumbers(A,H);
    printResult(calculateTriangleArea(A,H));
    return 0;
}