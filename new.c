#include <stdio.h>

 int main () {
     float x = 0;
     float result = 0;
     printf("Enter the value of x: ");
     scanf("%f", &x);
     result = (x / ( 5 + 2) + 30 * x - 51);
     printf("Result of the expression (x / (5 + 2) + 30 * x - 51 ) : %f\n ",result);
     return 0;
}
//
#include <stdio.h>
 int main() {
     int x = 0;
     int y = 0;
     float result = 0;
     printf("Enter the value for x: ");
     scanf("%d", &x);
     printf("Enter the value for y: ");
     scanf("%d", &y);
     result = (x + y + 21 * x / y - 200);
     printf("Result of the expression (x + y + 21 * x / y - 200) : %f\n",result);
     return 0;

}
//
#include <stdio.h>
 int main () {
     float x = 0;
     float y = 0;
     float average = 0;
     printf("Enter the value for x: ")
     scanf("%d", &x);
     printf("Enter the value of y: ");
     scanf("%f", &y);
     average = (x + y)/2;
     printf("The result of (x + y)/2 : %f\n", average);
     return 0;
}
//
#include <stdio.h>
 int main () {
     printf("Enter the uppercase letter: ");
     char letter = '\0';
     scanf("%c", &letter);
     printf("This is your lowercase letter: %c", letter + 32);
     return 0;
}
