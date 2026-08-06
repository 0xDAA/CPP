#include <iostream>
using namespace std;

int readPositiveNumber(){
    int number;
    do{
        cout<<"Enter Positive number : ";
        cin>>number;
    } while(number<0);
    return number;
}

void printLetterPattern(int num){
    for(int i=65;i<=65+num-1;i++){
        for(int j=1;j <= i-65+1;j++){
            cout<<char(i);
        }
        cout<<endl;
    }
}

int main(){
    printLetterPattern(readPositiveNumber());
    return 0;
}