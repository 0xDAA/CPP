#include <iostream>
#include <cstdlib>
using namespace std;

int readPositiveNumber(){
    int nkeys;
    do{
        cout<<"How many keys you want : ";
        cin>>nkeys;
    } while (nkeys<0);
    return nkeys;
}

int RandomNumber(int from,int to){
    int randNum=rand()%(to-from+1)+from;
    return randNum;
}

string blockKey(){
    string key="";
    for (int i =0;i<=3;i++){
        key = key+char(RandomNumber(65,90));
    }
    return key;
}

string keyGenerator(){
    string serialKey=blockKey()+"-"+blockKey()+"-"+blockKey()+'-'+blockKey();
    return serialKey;
}

void printKeys(int nkeys){
    for(int i=0;i<nkeys;i++){
        cout<<"Key ["<<i+1<<"] : "<<keyGenerator()<<endl;
    }
}

int main(){
    srand((unsigned)time(NULL));

    printKeys(readPositiveNumber());


    return 0;
}