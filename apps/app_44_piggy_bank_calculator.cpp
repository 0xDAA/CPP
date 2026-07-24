#include <iostream>
using namespace std;

float piggyBankCalculator(int penny,int nickel,int dime,int quarter,int dollar){
    return penny*1+nickel*5+dime*10+quarter*25+dollar*100;
}
int main(){
    int pe,ni,di,qu,dol;
    cout<<"Enter amount of Penny : ";
    cin>>pe;
    cout<<"Enter amount of Nickel: ";
    cin>>ni;
    cout<<"Enter amount of Dime : ";
    cin>>di;
    cout<<"Enter amount of Quarter : ";
    cin>>qu;
    cout<<"Enter amount of Dollar :  ";
    cin>>dol;
    cout<<piggyBankCalculator(pe,ni,di,qu,dol)<< " Pennies"<<endl;
    cout<<piggyBankCalculator(pe,ni,di,qu,dol)/100<< " Dollars"<<endl;
}