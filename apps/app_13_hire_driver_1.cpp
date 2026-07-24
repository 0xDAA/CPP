#include <iostream>
using namespace std;

void hireDriver (int age, bool hasDriverLicense){
    if (age >=21 && hasDriverLicense){
        cout<<"Hired!";
    } else {
        cout << "Rejected!";
    }
}
int main(){
    int age;
    bool hasDL;
    cout<<"Enter your age: "<<endl;
    cin>>age;
    cout<<"Do you have driver license ? (1/0) : "<<endl;
    cin>> hasDL;
    cout<<"The Result is: ";
    hireDriver(age,hasDL);
}