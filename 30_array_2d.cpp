#include <iostream>
using namespace std;

int main(){
    int points [3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<points[0][1]<<endl; // 2
    cout<<points[1][0]<<endl; // 4
    cout<<points[2][1]<<endl; // 8
    return 0;
}