#include <iostream>
using namespace std;

int readIntegerNumberInRange(int from,int to){
    int userInput;
    cout<<"Enter number between "<<from<<" to "<<to<<" : ";
    cin>>userInput;
    while (userInput <from || userInput >to)
    {
        cout<<"Enter number between "<<from<<" to "<<to<<" : ";
        cin>>userInput;
    }
    return userInput;
    
}
int main(){
    int userInput = readIntegerNumberInRange(1,10);
    cout<<"The Number is "<<userInput<<endl;
    return 0;
}