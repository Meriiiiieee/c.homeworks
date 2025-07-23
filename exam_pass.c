#include <stdio.h>

int main () {
    int score = 0;
    int passed = 0;

    printf("Enter your exam score 0-100: ");
    scanf("%d", &score);

    passed = (score > 50);

    if(passed==1) {
        printf("You passed: ");
    } else {
        printf("You dont passed: ");
      }

    return 0;
}            
     
