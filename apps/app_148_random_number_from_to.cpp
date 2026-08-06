#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int from,int to){
    int randNum=rand()%(to-from+1)+from;
    return randNum;
}

int main(){
    srand((unsigned)time(NULL));
    cout<<RandomNumber(100,200);


    return 0;
}