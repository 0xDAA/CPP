#include <iostream>
using namespace std;

int main(){
    // Declare Variable With Value:
    // [DataType] [Variable Name] = [Value]
    int totalPrice = 100;
    cout<<"Price of product is: "<<totalPrice<<endl; // endl = "\n" = New Line
    cout<<"Price after 15% Tax is : "<<totalPrice *1.15<<endl;
    // Update Value of totalPrice:
    totalPrice = 150; // [DataType] not required
    cout<<"The New Price is: "<<totalPrice;
    return 0;
}