#include <stdio.h>
#define SIZE 5

int main () {
    int number = 0;
    int arr[SIZE];

    printf("Enter the elememts: ");
    for (int i =0; i<SIZE; i++) {
    scanf("%d", &arr[i]);
    }

    printf("Enter the number: ");
    scanf("%d", &number);
    for(int i = 0; i < SIZE; i++) {
        if (number == arr[i] ) {
            printf("Yes: ");
	    return 0;
        }
    }
            printf("No: ");
     return 0;
}
