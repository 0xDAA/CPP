#include <iostream>
using namespace std;

int main(){
    float x[3],result;
    cout<<"Enter Grade 1 :"<<endl;
    cin>>x[0];
    cout<<"Enter Grade 2 :"<<endl;
    cin>>x[1];
    cout<<"Enter Grade 3 :"<<endl;
    cin>>x[2];
    cout<<"====================="<<endl;
    result = (x[0]+x[1]+x[2])/3;
    cout<<"The average of grades is : "<<result<<endl;
    return 0;
}