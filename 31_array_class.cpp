#include <iostream>
/// We Should Include Array:
#include <array>
using namespace std;

int main(){
    array<int,4> points = {1,2,3,4};
    cout<<points[0]<<endl; // 1
    cout<<points[1]<<endl; // 2
    cout<<points[2]<<endl; // 3
    cout<<points[3]<<endl; // 4
    cout<<"Elements Count: "<<points.size()<<endl;
    
    points.fill(20);

    cout<<points[0]<<endl; // 20
    cout<<points[1]<<endl; // 20
    cout<<points[2]<<endl; // 20
    cout<<points[3]<<endl; // 20
    return 0;
}