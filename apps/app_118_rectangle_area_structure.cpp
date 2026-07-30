#include <iostream>
using namespace std;

struct rectangleArea{
    int A,B;
    int area(){
        return A*B;
    }
};

rectangleArea readData(){
    rectangleArea blockArea;
    cout<<"Enter A : ";
    cin>>blockArea.A;
    cout<<"Enter B : ";
    cin>>blockArea.B;
    return blockArea;
}

void printResult(rectangleArea Area){
    cout<<"A is : "<<Area.A<<endl;
    cout<<"B is : "<<Area.B<<endl;
    cout<<"Area of this rectangle is : "<<Area.area()<<endl;
}
int main(){
    printResult(readData());
    return 0;
}