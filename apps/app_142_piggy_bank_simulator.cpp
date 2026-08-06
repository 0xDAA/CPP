#include <iostream>
using namespace std;

struct piggyMoney{
    int s5,s10,s20,s50,s100,s200;
    string holderName;
};

void readPiggy (piggyMoney &holder){
    cout<<"Enter holder name : ";
    cin>>holder.holderName;
    cout<<"Enter 5 : ";
    cin>>holder.s5;
    cout<<"Enter 10 : ";
    cin>>holder.s10;
    cout<<"Enter 20 : ";
    cin>>holder.s20;
    cout<<"Enter 50 : ";
    cin>>holder.s50;
    cout<<"Enter 100 : ";
    cin>>holder.s100;
    cout<<"Enter 200 : ";
    cin>>holder.s200;
}

void computePiggy(piggyMoney holder){
    int holderTotal=holder.s5*5+holder.s10*10+holder.s20*20+holder.s50*50+holder.s100*100+holder.s200*200;
    cout<<"Holder: "<<holder.holderName<<" had : "<<holderTotal<<" DZD";
}

int main(){
    piggyMoney Person;
    readPiggy(Person);
    computePiggy(Person);
    return 0;
}