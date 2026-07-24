#include <iostream>
using namespace std;


int main(){
    int sumTotal=0,userInput,i=1;
    while(i<=5){
        cout<<"Enter number "<<i<<" to sum: ";
        cin>>userInput;
        i++;
        if(userInput>50){
            continue;
        }
        sumTotal += userInput;
    }
    cout<<"Sum total : "<<sumTotal;
    return 0;
}