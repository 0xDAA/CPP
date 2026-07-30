#include <iostream>
using namespace std;

int readPower(){
    int number;
    do {
        cout<<"Enter a power : ";
        cin>>number;
    } while(number <0);
    return number;
}
int readNumber(){
    int number;
    do {
        cout<<"Enter a valid number : ";
        cin>>number;
    } while(number <0);
    return number;
}

int powerOfM(int number,int M){
    if (M ==0){
        return 1;
    }
    int pw=1;
    for (int i= 1 ; i<=M;i++ ){
        pw = pw * number;
    }
    return pw;
}


int main(){
    cout<< powerOfM(readNumber(),readPower());
    return 0;

}