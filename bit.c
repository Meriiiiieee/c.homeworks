#include <stdio.h>

int main () {

   int num = 0;
   int n =0;

   printf("Enter the number: ");
   scanf("%d", &num);
  
   printf("Enter the bit :");
   scanf("%d", &n);

   if ((num & (1<<n)) != 0) {
       printf("The bit is 1: ");
   } else {
       printf("The bit is 0: ");
     }

  return 0;
}
