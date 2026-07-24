#include <iostream>
using namespace std;

/*
    Array
    Syntax
    [Array Data Type] [Arrayname][Number of items] = {Array Values}
*/

int main(){
    int nums[4] ={10,20,30,40};
    cout<<sizeof(int)<<endl; // 4 Bytes
    cout<<sizeof(nums)<<endl; // 16 Bytes

    double dos[4] ={10,20,30,40};
    cout<<sizeof(double)<<endl; // 8 Bytes
    cout<<sizeof(nums)<<endl; // 16 Bytes
    return 0;
}