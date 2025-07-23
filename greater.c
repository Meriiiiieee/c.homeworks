#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a>b && a>c) {
        printf("The greatest is a: ");
    }  else if (b>a && b>c) {
        printf("The greatest is b: ");
       } else if (c>a && c>b) {
           printf("The greatest is c: ");
          }

    return 0;
}         
