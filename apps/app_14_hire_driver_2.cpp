#include <iostream>
using namespace std;

void hireDriver (int age, bool hasDriverLicense,bool hasRecommendation){
    if (age >=21 && hasDriverLicense || hasRecommendation){
        cout<<"Hired!";
    } else {
        cout << "Rejected!";
    }
}
int main(){
    int age;
    bool hasDL,hasRec;
    cout<<"Enter your age: "<<endl;
    cin>>age;
    cout<<"Do you have driver license ? (1/0) : "<<endl;
    cin>> hasDL;
    cout<<"Do you have recommendation ? (1/0) : "<<endl;
    cin>> hasRec;
    cout<<"The Result is: ";
    hireDriver(age,hasDL,hasRec);
}