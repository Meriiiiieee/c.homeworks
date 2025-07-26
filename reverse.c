#include <stdio.h>

int main () {

   int num = 0;

   printf("Enter the number: ");
   scanf("%d", &num);

   if (num<=12) {
      printf("Error: ");
   }

   while (num>0) {
     int result = num % 10;
     printf("%d", result);
     num = num/10;
  }

  return 0;
}
