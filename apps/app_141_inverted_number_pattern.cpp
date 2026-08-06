#include <iostream>
using namespace std;

int readPositiveNumber(){
    int numb=0;
    do{
        cout<<"Enter a number : ";
        cin>>numb;
    } while(numb<0);
    return numb;
}

void printInvertedNumber(int numb){
    for (int i = numb; i>=1;i--){
        for (int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}

int main(){
    printInvertedNumber(readPositiveNumber());
    return 0;
}