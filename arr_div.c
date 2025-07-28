#include <stdio.h>
#define SIZE 6

int main () {

    double arr[SIZE];

    for(int i=0; i < SIZE; i++) {
    scanf("%lf", &arr[i]);
    }

    for(int i = 0; i < SIZE; i++) {
    arr[i] = arr[i] / SIZE;
    printf("%lf\n", arr[i]);
    }

    return 0;
 }
