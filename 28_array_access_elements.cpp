#include <iostream>
using namespace std;

int main(){
    int nums[] ={10,20,30,40};
    cout<<"First Element: "<<nums[0]<<endl;
    cout<<"Last Element: "<<nums[3]<<endl;

    cout<<"Location First Element: "<<&nums[0]<<endl;
    cout<<"Location Last Element: "<<&nums[3]<<endl;
    return 0;
}