#include <iostream>
using namespace std;

struct Car{
    string Brand;
    string Model;
    int Year;

};

int main(){

    Car BMW;
    BMW.Brand = "BMW";
    BMW.Model = "M4";
    BMW.Year = 2022;

    cout<<"Car Brand: "<<BMW.Brand<<endl;
    cout<<"Car Model: "<<BMW.Model<<endl;
    cout<<"Car Year: "<<BMW.Year<<endl;
    
    return 0;
}