#include <stdio.h>

int main () {
    int num = 0;

    printf("Enter the positive value: ");
    scanf("%d", &num);

    for (int i=1; i<=10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
} 
