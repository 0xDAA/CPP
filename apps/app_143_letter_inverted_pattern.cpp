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

void printLetterInvertedPattern(int num){
    for(int i=65+num-1;i>=65;i--){
        for(int j=1;j <= num-((65+num-1)-i);j++){
            cout<<char(i);
        }
        cout<<endl;
    }
}

int main(){
    printLetterInvertedPattern(readPositiveNumber());
    return 0;
}