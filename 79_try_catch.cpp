#include<iostream>
#include <vector>
using namespace std;


int main() {
    vector<int> arrayOfNumbers = {10,200,30,40};

    try
    {
        // Error: (there's only 4 elements in the array)
        cout<<arrayOfNumbers.at(7);
    }
    catch(...)
    {
        cout<<"Something went wrong!";
    }
    
}

