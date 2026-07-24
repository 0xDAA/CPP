#include <iostream>
using namespace std;

int average3Marks(int mark1,int mark2,int mark3){
    return (mark1+mark2+mark3)/3;
}

int main(){
    int mark1,mark2,mark3;
    cout<<"Enter first mark: ";
    cin>>mark1;
    cout<<"Enter second mark: ";
    cin>>mark2;
    cout<<"Enter third mark: ";
    cin>>mark3;
    cout<<"The Average is: "<< average3Marks(mark1,mark2,mark3);
}