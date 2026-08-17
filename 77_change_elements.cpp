#include<iostream>
#include <vector>
using namespace std;


int main() {
    vector<int> array = {10,20,30,40};

    cout<<"Vector Elements: ";
    for (const int &i:array){
        cout<<i<<" ";
    }
    // Update Values of Array:
    cout<<"\nUpdated Values : ";
    for (int &i:array){
        i=20;
        cout<<i<<" ";
    }
    // Update Values:
    array[0]=10;
    array.at(2)=50;
    array.at(1)=30;

    cout<<"\nUpdated Values : ";
    for (int &i:array){
        cout<<i<<" ";
    }
    

}

