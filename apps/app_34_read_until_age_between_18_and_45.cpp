#include <iostream>
using namespace std;

bool ageValidator(int _userAge){
    if (_userAge>=18 && _userAge <= 45) {
        return 1;
    }  else {
        return 0;
    }
}

int main(){
    int age;
    while (true){
        cout<<"Enter your age: ";
        cin>>age;
        if(ageValidator(age)){
            cout <<"Valid Age!"<<endl;
            break;
        } else {
            cout<<"Invalid Age!"<<endl;
            cout<<"Try Again!"<<endl;
        }
    }
}