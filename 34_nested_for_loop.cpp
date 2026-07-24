#include <iostream>
using namespace std;

int main(){
    string products[3] = {"Shirt 1","Shirt 2","Shirt 3"};
    string sizes[3] = {"Small","Large","X-Large"};
    
    for(int i =0 ; i<3;++i){
        cout<<"-------------------"<<endl;
        cout<<"Prodcut Name: "<<products[i]<<endl;
        for (int j = 0 ; j <3; j++){
            cout<<j+1<<" - Size: "<<sizes[j]<<endl;
        }
    }

    return 0;
}