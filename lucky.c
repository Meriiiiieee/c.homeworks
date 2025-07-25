#include <stdio.h>

int main () {
    int num = 0;
    int lucky = 1;

    printf("Enter number: ");
    scanf("%d", &num);
    
    if (num == 0) {
        printf("Number is not lucky: ");
        return 0;
    }

    while (num>0) {
        int digit = num % 10;
        if (digit != 4 && digit != 7) {
            lucky = 0;
            break;
        }    
        num /= 10;
    }
    
    if (lucky == 0) {
        printf("Number is not lucky: ");
        } else {
            printf("Number is lucky: ");
            }
    return 0;
}    
