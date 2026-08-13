#include<iostream>
using namespace std;

int main() {
    const float PI = 3.1459;
    printf("PI = %.*f\n",1,PI);
    printf("PI = %.*f\n",2,PI);
    printf("PI = %.*f\n",3,PI);
    printf("PI = %.*f\n",4,PI);

    float i=7.0,j= 9.0;
    printf("\nThe Float division : %.3f / %.3f = %.3f \n\n",i,j,i/j);

    double k = 14.37;
    printf("The Double value is : %.3f\n",k);
    printf("The Double value is : %.4f\n",k);
    printf("The Double value is : %.5f\n",k);

    return 0;

}

