#include <stdio.h>
 
 int main() {
     int x = 0;
     int y = 0;
     int result = 0;
     char op = 0;

     printf("Enter two numbers: ");
     scanf("%d %d", &x, &y);

     printf("Enter (+ ,- ,* ,/) or Q for left: ");
     scanf(" %c", &op);

     if (op == 'Q' || op == 'q') {
         printf("You are left from the program\n: ");
         return 0;
     }

     switch(op) {
        case '+':
            result = x + y;
            printf("Result %d\n: ", result);
            break;

        case '-':
            result = x - y;
            printf("Result %d\n: ", result);
            break;

        case '*':
            result = x * y;
            printf("Result %d\n: ", result);
            break;

        case '/':
            result = x / y;
            printf("Result %d\n: ", result);
            break;

        default:
            printf("Wrong action\n: ");
            break;
     } 

     return 0;
}
