#include <iostream>
using namespace std; 

string readName(){
    string Name;
    cout<<"Enter Your Name : ";
    getline(cin,Name);
    return Name;
}

void printName(string Name){
    cout<<"Your Name is : "<<Name;
}

int main(){
    printName(readName());
    return 0;
}