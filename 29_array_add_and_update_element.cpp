#include <iostream>
using namespace std;

int main(){
    int nums[4];

    nums[0]=10;
    nums[1]=10;
    nums[2]=300;
    nums[3]=500;

    cout<<"Element 1 : "<<nums[0]<<endl;
    cout<<"Element 2 : "<<nums[1]<<endl;
    cout<<"Element 3 : "<<nums[2]<<endl;
    cout<<"Element 4 : "<<nums[3]<<endl;

    nums[2] = 1000; // Update Element

    cout<< "Element 3 After Update : "<<nums[2]<<endl;

    return 0;
}