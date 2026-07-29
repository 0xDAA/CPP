#include <iostream>
using namespace std; 

struct stInfo{
    string FirstName;
    string LastName;
};

stInfo readInfo(){
    stInfo info;
    cout<<"Enter first name: ";
    cin>> info.FirstName;
    cout<<"Enter last name: ";
    cin>> info.LastName;
    return info;
}

string getFullName(stInfo info){
    return info.FirstName+" "+info.LastName;
}

void printFullName(string FullName){
    cout<<"Your full Name is : "<<FullName;
}

int main(){
    printFullName(getFullName(readInfo()));
    return 0;
}