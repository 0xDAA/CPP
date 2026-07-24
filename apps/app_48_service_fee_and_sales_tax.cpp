#include <iostream>
using namespace std;

int main(){
    float totalBill,Bill;
    cout<<"Total bill: ";
    cin>>totalBill;
    // Tax Bill & Service Fee
    Bill = (totalBill*1.1)*1.16;
    cout<<"Total Bill after adding service fee & tax is: "<<Bill;
    return 0;
}