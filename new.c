#include <stdio.h>

 int main () {
     float x = 0;
     float result = 0;
     printf("Enter the value of x: ");
     scanf("%f", &x);
     result = (x / ( 5 + 2) + 30 * x - 51);
     printf("Result of the expression (x / (5 + 2) + 30 * x - 51 ) : %f\n ",result);
     return 0;
}

