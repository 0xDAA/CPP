#include <iostream>
using namespace std;

float salesCommissionPercentage(float totalSales){
    if(totalSales>=1000000) {
        return totalSales*0.01;
    } else if (totalSales >=500000){
        return totalSales*0.02;
    } else if (totalSales >=100000){
        return totalSales*0.03;
    } else if (totalSales >=50000){
        return totalSales*0.05;
    } else {
        return totalSales*0;
    }
}
int main(){
    int numberOfSales;
    cout<<"Enter total sales: ";
    cin>>numberOfSales;
    cout<<"Your commission is: "<<salesCommissionPercentage(numberOfSales);
}