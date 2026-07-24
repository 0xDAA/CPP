#include <iostream>
using namespace std;
float remainder(float cashPaid,float totalBill){
    return cashPaid-totalBill;
}
int main(){
    float totalBill,cashPaid;
    cout<<"Total bill: ";
    cin>>totalBill;
    cout<<"Cash Paid: ";
    cin>>cashPaid;
    cout<<remainder(cashPaid,totalBill);
    return 0;
}