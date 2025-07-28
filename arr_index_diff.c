#include <stdio.h>
#define SIZE 5

int main () {
     int arr[SIZE];
     int index1 = 0;
     int index2 = 0;

     printf("Enter the elements: ");
     for (int i = 0; i < SIZE; i++) {
          scanf("%d", &arr[i]);
      }

      int min = arr[0];
      int max = arr[0];

      for (int i = 1; i < SIZE; i++) {
          if (arr[i] > max) {
              max = arr[i];
	      index1 = i;
           }

           if (arr[i] < min) {
               min = arr[i];
               index2  = i;
            }
        }
           printf("%d", index1 - index2);
	return 0;
}
