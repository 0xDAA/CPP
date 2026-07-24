#include <iostream>
using namespace std;

int main(){
    int nums[5] ={10,20,30,40,50};
    for (int i = 0 ; i < 5 ; i++){
        if ( nums[i] == 30){
            cout<<"Number 30 founded at index: ["<<i<<"] \n";
            break;
        }
    }
}