#include<iostream>
using namespace std;

int readPositiveNumber(){
    int number;
    cout<<"Enter a valid number : ";
    cin>>number;
    while(cin.fail()){
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout<<"Invalid number, Enter a valid number : ";
        cin>>number;
    }
    return number;
}

int main()
{
    int num=readPositiveNumber();
    cout<<"The Number is : "<<num;

}