#include <stdio.h>

 int main () {
     int x = 0;
     float result = 0;
     printf("Enter the value of x: ");
     scanf("%d", &x);
     result = (4 * x + 21 * x * x - 12);
     printf("Result of the expression (4 * x + 21 * x * x - 12 ) : %f\n ",result);
     return 0;
}

