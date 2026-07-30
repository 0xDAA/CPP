#include <iostream>
using namespace std;
struct threeNumbers{
    int n1,n2,n3;
};

threeNumbers readNumbers(){
    threeNumbers numbers;
    cout<<"Enter Number1 : ";
    cin>> numbers.n1;
    cout<<"Enter Number2 : ";
    cin>> numbers.n2;
    cout<<"Enter Number3 : ";
    cin>> numbers.n3;
    return numbers;
}

int sumOfThree(threeNumbers nums){
    return nums.n1+nums.n2+nums.n3;
}

void printTotal(threeNumbers threeNums){
    cout<<"Total is : "<<sumOfThree(threeNums);
}
int main(){
    printTotal(readNumbers());
    return 0;
}