#include <stdio.h>
#define SIZE 5

int main() {
    int arr[SIZE];

    printf("Enter the elemnts: ");
    for (int i = 0; i < SIZE; i++) {
         scanf("%d", &arr[i]);
    }

    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = i + 1; j < SIZE; j++) {
             if (arr[i] > arr[j]) {
                 int tmp = arr[j];
                 arr[j] = arr[i];
                 arr[i] = tmp;
              }
	}
    }
    
    for (int i = 0; i < SIZE; i++) {
         printf("Sorted array is %d\n", arr[i]);
    }

     return 0;
}
