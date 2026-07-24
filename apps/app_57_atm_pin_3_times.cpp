#include <iostream>
using namespace std;

void balanceBankChecker() {
    int PINCODE,LOCK=3;
    while (true)
    {
        cout<<"Enter your ATM PIN Code: "<<endl;
        cin>>PINCODE;
    if (PINCODE == 1234) {
        cout<<"Your Balance is : 7500"<<endl;
        break;
    } else {
        --LOCK;
        if (LOCK ==0) {
            cout<< "Card Is Locked "<<endl;
            break;
        } else {
            cout<<"Wrong PIN Code"<<endl;
        }
    }
    }
}

int main(){

    balanceBankChecker();
    return 0;
}