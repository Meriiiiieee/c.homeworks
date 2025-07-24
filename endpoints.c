#include <stdio.h>

int main () {
    int start = 0;
    int end = 0;
    int sum = 0;

    printf("Enter the values of start and end: ");
    scanf("%d %d", &start, &end);

    for (int i=start; i<=end; i++) {
        if (i%2==0) {
            sum +=i;
        }
    }
    printf("Sum of even numbers %d\n ", sum);

    return 0;
}  
