#include <iostream>
using namespace std;


int main(){
    int arr[10]={10,20,44,55,33,22,99,88,99,100};
    for (int i =0 ; i<size(arr);i++){
        cout<<i<<" : "<<arr[i]<<endl;
        if (arr[i] == 22){
            cout<<"22 Founded at: "<<i;
            break;
        }
    }
    return 0;
}