#include <iostream>
using namespace std;

int main(){
    int num,sum=0;
    while (true)
    {
        cin>>num;
        if(num == -99) {
            cout<<sum;
            break;
        } else{
            sum +=num;
        }
    }
    return 0;
}