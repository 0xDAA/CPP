#include <iostream>
using namespace std;
void readArray(float grade[3]){
    cout<<"Enter grade 1 : ";
    cin>> grade[0];
    cout<<"Enter grade 2 : ";
    cin>> grade[1];
    cout<<"Enter grade 3 : ";
    cin>> grade[2];
}
float result(float grade[3]){
    return (grade[0]+grade[2]+grade[1])/3;
}

int main(){
    float grade[3];
    readArray(grade);
    cout<<"====================="<<endl;
    cout<<"The average of grades is : "<<result(grade)<<endl;
    return 0;
}