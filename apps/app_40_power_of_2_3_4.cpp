#include <iostream>
using namespace std;

void power(int num){
    cout<<num<<"^2 = "<<num*num<<endl;
    cout<<num<<"^3 = "<<num*num*num<<endl;
    cout<<num<<"^4 = "<<num*num*num*num<<endl;
}
int main(){
    power(3);
}