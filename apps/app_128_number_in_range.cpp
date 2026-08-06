#include <iostream>
using namespace std;

int ReadIntNumberInRange(int from,int to){
    int num;
    cout<<"Enter a number between "<<from<<" to "<<to<<" : ";
    cin>>num;
    while (num <from || num >to){
        cout<<"Please enter number between "<<from<<" to "<<to<<" : ";
        cin>>num;
    }
    return num;
}
int main()
{
    int x = ReadIntNumberInRange(1,10);
    cout<<"Valid number is : "<<x;
    return 0;
}