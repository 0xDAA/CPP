#include <iostream>
using namespace std; 

enum enCountries {Jordan=1,Algeria=2,Iraq=3,Egypt=4,Libya=5,Sudan=6,Other=7};

int main(){
    int co;
    enCountries Country;
    cout<<"Enter Number of Your Country:"<<endl;
    cout<<"[1] - Jordan"<<endl;
    cout<<"[2] - Algeria"<<endl;
    cout<<"[3] - Iraq"<<endl;
    cout<<"[4] - Egypt"<<endl;
    cout<<"[5] - Libya"<<endl;
    cout<<"[6] - Sudan"<<endl;
    cout<<"[7] - Other"<<endl;
    cout<<"Your Choice: ";
    cin>>co;
    Country= (enCountries)co;
    if(Country == enCountries::Jordan){
        cout<<"Your Country is : Jordan";
    } else if (Country == enCountries::Algeria){
        cout<<"Your Country is : Algeria";
    } else if (Country == enCountries::Iraq){
        cout<<"Your Country is : Iraq";
    } else if (Country == enCountries::Egypt){
        cout<<"Your Country is : Egypt";
    } else if (Country == enCountries::Libya){
        cout<<"Your Country is : Libya";
    } else if (Country == enCountries::Sudan){
        cout<<"Your Country is : Sudan";
    } else if (Country == enCountries::Other){
        cout<<"Your Country not listed ";
    }
}
