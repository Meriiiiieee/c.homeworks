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
//
#include <stdio.h>
 int main() {
     int x = 0;
     int y = 0;
     float result = 0;
     printf("Enter the value for x: ");
     scanf("%d", &x);
     printf("Enter the value for y: ");
     scanf("%d", &y);
     result = (x + y + 21 * x / y - 200);
     printf("Result of the expression (x + y + 21 * x / y - 200) : %f\n",result);
     return 0;
}
