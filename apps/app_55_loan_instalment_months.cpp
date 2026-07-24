#include <iostream>
using namespace std;

int loanInstalmentMonths(int loanAmount,int monthlyPayment){
    return loanAmount/monthlyPayment;
}

int main(){
    int loanAmount,monthlyPayment;
    cout<<"Enter Loan amount: ";
    cin>>loanAmount;
    cout<<"Enter Monthly Payment: ";
    cin>>monthlyPayment;
    cout<<loanInstalmentMonths(loanAmount,monthlyPayment)<<" Months";
    return 0;
}