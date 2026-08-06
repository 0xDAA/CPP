#include <iostream>
using namespace std;

string readPasswordTrail(){
    string pass;
    cout<<"Enter from AAA to ZZZ: ";
    cin>>pass;
    return pass;
}
bool passwordChecker(string pass){
    int trial=0;
    string word="";
    for(int i=65;i<=90;i++){
         for(int j=65;j<=90;j++){
            for(int k=65;k<=90;k++){
                trial++;
                word = word +char(i);
                word = word +char(j);
                word = word +char(k);
                cout<<"Trial["<<trial<<"] : "<<word<<endl;
                if (pass == word){
                    cout<<"Password is : "<<pass;
                    cout<<"Founded after "<<trial<<" Trial(s)";
                    return true;
                }
                word="";
            }
        }   
    }
}

int main(){
    passwordChecker(readPasswordTrail());
    return 0;
}