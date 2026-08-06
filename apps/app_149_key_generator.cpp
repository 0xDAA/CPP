#include <iostream>
#include <cstdlib>
using namespace std;

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

int main(){
    srand((unsigned)time(NULL));

    cout<<keyGenerator()<<endl;
    return 0;
}