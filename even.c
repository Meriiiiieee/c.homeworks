#include <stdio.h>

int main () {
    int a = 0;

    printf("Enter the number: ");
    scanf("%d", &a);

    if ( a % 2 == 0) {
        printf("The number is even: ");
       } else { 
           printf("The number is odd: ");
         }

    return 0;
}           
