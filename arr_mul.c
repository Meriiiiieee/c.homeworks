#include <stdio.h>

int main() {

    int arr1[SIZE];
    int arr2[SIZE];

    for (int i = 0; i < SIZE; i++) {
    scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < SIZE; i++) {
    scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < SIZE; i++) {
    printf("%d\n", arr1[i] * arr2[i]);
    }

    return 0;
}
