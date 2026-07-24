#include <iostream>
using namespace std;

int power(int num,int pwr){
    int res=1;
    for(int i=pwr;i>=1;i--){
        res = res *num;
    }
    return res;
}
int main(){
    cout<<power(2,4);
}