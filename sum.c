#include <stdio.h>

int main() {
    int num = 0;
    int sum = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    while (num > 0) {
          sum += num % 10;
          num /= 10;
    }

    printf("Result sum %d\n", sum);

    return 0;
}
