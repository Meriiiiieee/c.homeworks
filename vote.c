#include <stdio.h>

int main () {
    int age = 0;

    printf("Enter the age: ");
    scanf("%d", &age);

    if (age>=18) {
        printf("They are eligible to vote: ");
    } else {
        printf("They cannot vote: ");
      }  

    return 0;
}      
