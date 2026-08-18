#include<iostream>
#include <ctime>
using namespace std;

int main() {
    time_t t = time(0); // Get time now
    char * tn = ctime(&t);
    cout<<"Local time now: "<<tn<<endl;

    tm* utcnow=gmtime(&t);
    tn = asctime(utcnow);
    cout<<"UTC NOW IS : "<<tn;
    return 0;
}