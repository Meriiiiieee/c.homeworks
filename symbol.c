#include <stdio.h>

int main () {
    char sym = 0;

    printf("Enter the value: ");
    scanf("%c", &sym);

    if(sym>='0' && sym<='9') {
        printf("True: ");
    } else {
        printf("False: ");
      }

    return 0;
}            
