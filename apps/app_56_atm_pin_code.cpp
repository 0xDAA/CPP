#include <iostream>
using namespace std;

void balanceBankChecker(int PIN) {
    if (PIN == 1234) {
        cout<<"Your Balance is : 7500";
    } else {
        cout<< "Wrong PIN";
    }
}

int main(){
    int PINCODE;
    cout<<"Enter your ATM PIN Code: ";
    cin>>PINCODE;
    balanceBankChecker(PINCODE);
    return 0;
}