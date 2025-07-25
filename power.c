#include <stdio.h>
 
 int main() {
     int x = 0;
     int y = 0;
     int result = 1;

     printf("Enter values of x and y: ");
     scanf("%d %d", &x, &y);

     for (int i=0; i<y; i++) {
          result = result * x;
     }

     printf("%d to the power of %d is %d\n", x, y, result);
 
     return 0;
}     
