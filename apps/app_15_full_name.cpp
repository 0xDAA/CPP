#include <iostream>
using namespace std;

string fullName(string firstName,string lastName){
    return firstName + " " +lastName;
}

int main(){
    string fname,lname;
    cout<<"Enter your first name : ";
    cin>>fname;
    cout<<"Enter your last name : ";
    cin>>lname;
    cout<< fullName(fname,lname);
    return 0;
}