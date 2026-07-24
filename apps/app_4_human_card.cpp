#include <iostream>
using namespace std;

enum enEyeColor {Green=10,Blue=20,Brown=30,Black=40,Other=-1};

struct stHuman {
    string name;
    enEyeColor eye;
    int height,age;
    float weight;
};

int main(){
    stHuman Human1;
    Human1.eye=enEyeColor::Brown;
    Human1.name="Ahmed";
    Human1.height=180;
    Human1.weight=45;
    Human1.age=25;
    
    cout<<"====== Human Card ======"<<endl;
    cout<< "Name : "<<Human1.name<<endl;
    cout<< "Age : "<<Human1.age<<endl;
    cout<< "Height : "<<Human1.height<<endl;
    cout<< "Weight : "<<Human1.weight<<endl;
    cout<< "Eye Color : "<<Human1.eye<<endl;
    cout<<"========================"<<endl;
}