#include <iostream>
#include <string>
using namespace std;

int main(){
    string fullName,str1,str2;
    cout<<"Enter your full name: ";
    getline(cin,fullName);
    cout<<"Enter String 1 (Should be a number) : ";
    cin>>str1;
    cout<<"Enter String 2 (Should be a number) : ";
    cin>>str2;

    cout<<"\n******************************\n";

    cout<<"The length of your full name is: "<<fullName.length()<<endl;
    cout<<"Characters at 0 2 4 are:"<<fullName[0]<<" "<<fullName[2]<<" "<<fullName[4]<<endl;
    cout<<"Concatenating Str1 & Str2 : "<<str1+str2<<endl;
    cout<<str1<<" * "<<str2<<" = " <<stoi(str1)*stoi(str2)<<endl;
}