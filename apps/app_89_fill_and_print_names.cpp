#include <iostream>
using namespace std; 

struct database{
    string name;
};

void dataFiller(database x[],int length){
    for (int i=0;i<length;i++){
        cout<<"Enter Name "<<i+1<<" : ";
        cin>>x[i].name;
    }
}

void dataPrinter(database x[],int length){
    for (int i=0;i<length;i++){
        cout<<"Name of "<<i+1<<" is : "<< x[i].name<<endl;

    }
}

int main(){

    database x[2];
    dataFiller(x,2);
    dataPrinter(x,2);

}
