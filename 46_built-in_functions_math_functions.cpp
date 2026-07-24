#include <iostream>
#include <cmath>
using namespace std;

/*
    Math Functions
    --- pow
    --- fmod
    --- ceil
    --- floor
    --- round
    --- trunc
    --- abs
*/
int main(){
    cout<< pow(2,4)<<endl;        // 16
    cout << 2 * 2 * 2 * 2 <<endl; // 16

    cout<< 11 % 2 <<endl; //1
    // cout<< 11.5 %2 <<endl; // Error
    cout<< fmod(11.5,2)<<endl; // 1.5
    cout<<ceil(9.1)<<endl; // 10
    cout<<floor(8.999)<<endl; // 8
    cout<<round (2.4)<<endl; // 2
    cout<<round (2.5)<<endl; // 3
    cout << trunc (5.5)<<endl; //5
    cout << trunc (6.1)<<endl; //6
    cout << trunc (7.999)<<endl; //7
    cout<< abs(-551)<<endl; // 551

}