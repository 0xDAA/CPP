#include <iostream>
using namespace std;

void printYourName(string yourName){
    cout<<"Hello Mr."<<yourName<<endl;
}

int main(){
    cout<<"What's your name? : ";
    string name;
    getline(cin,name);
    printYourName(name);
}