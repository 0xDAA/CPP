#include <iostream>
using namespace std;

struct cryptoUserHoldings{
    float USDT=0,BTC=0,ETH=0,FHE=0,TIA=0,FET=0;
};

struct cryptoUserDetails{
    string nickName;
    int UID;
    cryptoUserHoldings Holdings;
};

int main(){
    cryptoUserDetails Users[3];
    float totalUSDTFlow;

    Users[0].nickName="Ahmed";
    Users[0].Holdings.USDT=1000.15;
    Users[0].Holdings.FHE=47177.75;
    Users[0].UID=165955312;

    Users[1].nickName="DAA";
    Users[1].Holdings.USDT=50.57;
    Users[1].Holdings.BTC=1.7;
    Users[1].UID=165955313;

    Users[2].nickName="Abdelhalim";
    Users[2].Holdings.USDT=7417.78;
    Users[2].UID=165955314;

    for(int i =0;i<3;i++){
        totalUSDTFlow += Users[i].Holdings.USDT;
        cout<<"============================\n";
        cout<<"[-] USERNAME : "<< Users[i].nickName<<"\n";
        cout<<"[-] UserID : "<< Users[i].UID<<"\n";
        cout<<"[-] USDT Balance : "<< Users[i].Holdings.USDT<<"\n";
        cout<<"============================"<<endl;
    }
    cout<<"Total USDT in Platform : "<<totalUSDTFlow<<endl;
    cout<<"============================"<<endl;
    return 0;
}