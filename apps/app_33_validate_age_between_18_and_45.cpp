#include <iostream>
using namespace std;

string ageValidator(int _userAge){
    if (_userAge>=18 && _userAge <= 45) {
        return "Valid Age";
    }  else {
        return "Invalid Age";
    }
}

int main(){
    cout<<ageValidator(17)<<endl;
    cout<<ageValidator(25)<<endl;
    cout<<ageValidator(45)<<endl;
}