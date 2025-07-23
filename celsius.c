#include <stdio.h>

int main() {

    float celsius = 0;

    printf("Enter the temperature in celsius: ");
    scanf("%f", &celsius);

    if (celsius < 15) {
        printf("Temp is cold: ");
    } else {
        printf("Temp is warm: ");
      }
    return 0;
}        
