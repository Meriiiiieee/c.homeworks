#include <stdio.h>

int main () {
    char sym = 0;

    printf("Enter the lowercase of latin alphabet: ");
    scanf("%c", &sym);

    if(sym>='A' && sym<='Z') {
        sym +=32;
        printf("This your lowwercase letter %c", sym);
    } else {
        printf("Wrong input: ");
      }

    return 0;
}            
