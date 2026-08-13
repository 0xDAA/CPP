#include<iostream>
using namespace std;

int main() {
    int page=1,totalPages=10;
    printf("You are in page %d of %d\n",page,totalPages);
    printf("The Page number : %0*d\n",2,page);
    printf("The Page number : %0*d\n",3,page);
    printf("The Page number : %0*d\n",4,page);
    int priceItem1=20,priceItem2=30;
    printf("Total Price : %d + %d = %d\n",priceItem1,priceItem2,priceItem1+priceItem2);
    return 0;

}

