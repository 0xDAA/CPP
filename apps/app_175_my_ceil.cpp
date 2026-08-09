#include <iostream>
#include <cmath>
using namespace std;

float readNumber(){
    float num;
    cout<<"Enter a number : ";
    cin>>num;
    return num;
}

float getFractionNumber(float number){
    return number-int(number);
}

float myCeil(float number){
    if (getFractionNumber(number) != 0 ){
        if (number > 0){
            return int(number) +1;
        } else {
            return int(number);
        }
    } else {
        return number;
    }
}

int main(){
    cout<<myCeil(11.5)<<endl;
    cout<<myCeil(-11.5)<<endl;
    cout<<ceil(-11.5);

}