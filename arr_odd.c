#include <stdio.h>
#define SIZE 5

int main() {
    int arr[SIZE];

    printf("Enter the elements: ");
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < SIZE; i++) {
        if ( arr[i] % 2 == 1) {
            printf("The number is odd:  %d\n", arr[i]);
        }
     }

    return 0;
}
