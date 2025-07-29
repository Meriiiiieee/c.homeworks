#include <stdio.h>

int main () {
    int n = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    } 

    for (int i = 0; i < n-1; i++) {
        if ( arr[i+1] - arr[i] != 1) {
          int result = arr[i] + 1;
          printf("%d\n", result);
          return 0;
        }
     } 
     return 0;
  
}   
