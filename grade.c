#include <stdio.h>

int main () {
    int grade = 0;

    printf("Enter the grade: ");
    scanf("%d", &grade);

    if(grade>=90 && grade<=100) {
        printf("Class A: ");
    } else if (grade>=80 && grade<=89) {
        printf("Class B: ");
      } else if (grade>=70 && grade<=79) {
          printf("Class C: ");
        } else if (grade>=60 && grade<=69) {
            printf("Class D: ");
          } else if (grade<=60) {
              printf("Class E: ");
            }  

    return 0;
}                  
