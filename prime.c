#include <stdio.h>
 
 int main() {
     int x = 0;
    
     printf("Enter the number: ");
     scanf("%d", &x);

     if (x <= 1){
         printf("Number is not prime: ");
     } else if (x%4==0 || x%9==0 || x%5==0) {
        printf("Number is not prime:");
     } else {
         printf("Number is prime: ");
       }

     return 0;
}     
