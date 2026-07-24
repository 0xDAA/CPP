#include <iostream>
using namespace std;
// Define Structure
struct Car{
    string brand;
    string model;
    int year;
    string ownerName;
};
int main(){
    Car MyCar;
    MyCar.brand = "BMW";
    MyCar.model = "G80";
    MyCar.ownerName = "Ahmed";
    MyCar.year = 2026;
    cout<<"Brand: " << MyCar.brand<<" Model: "<<MyCar.model <<" Year: "<<MyCar.year<<endl;
    cout<<"Owner Name: "<<MyCar.ownerName;
}