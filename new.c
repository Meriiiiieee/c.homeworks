ii#include <stdio.h>

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
//
#include <stdio.h>
 int main () {
     printf("Enter the lowercase letter: ");
     char letter = '\0';
     scanf("%c"; %letter);
     printf("This is your uppercase letter: %c", letter - 32);
     return 0;
}
//
#include <stdio.h>
 int main () {
     int x = 0;
     int y = 0;
     int sum = 0;
     printf("Enter two numbers: ");
     scanf( "%d %d", &x, &y);
     sum = (x + y);
     printf("The result of sum: %d\n", sum);
     return 0;
}
//
#include <stdio.h>
 int main () {
     float length = 0;
     float width = 0;
     float area = 0;
     printf("Enter the values of length and width: ");
     scanf("%f %f", &length, &width);
     area = length * width;
     printf("The result of area: %f", area);
     return 0;
}
//
#include <stdio.h>
 int main () {
     float celsius = 0;
     float fahrenheit = 0;
     printf("Enter temperature in Celsius: ");
     scanf("%f", &celsius);
     fahrenheit = (celsius * 9/5) + 32;
     printf("%.2f", celsius, fahrenheit);
     return 0;

}
// 
#include <stdio.h>
 int main () {
     char a = 0;
     printf("Enter the character: ");
     scanf("%c", &a);
     printf("The ASCII value of : %d", a);
     return 0;
}
//
#include <stdio.h>
 int main () {
    printf("size of int: %zu\n", sizeof(int));
    printf("size of double: %zu\n", sizeof(double));
    printf("size of char: %zu\n", sizeof(char));
    printf("size of float: %zu\n", sizeof(float));
    return 0;
}
//
#include <stdio.h>
 int main () { 
     int x = 0;
     int y = 0;
     int reminder = 0;
     printf("Enter two numbers: ");
     scanf("%d %d", &x, &y);
     remainder = x % y;
     printf("The result: %d", remainder);
     return 0;
}
//
#include <stdio.h>
 int main () {
     int num = 0;
     int cube = 0;
     printf("Enter the number: ");
     scanf("%d", &num);
     cube = num * num * num;
     printf("Cube: %d\n", cube);
     return 0;
}
//
#include <stdio.h>
 int main () {
    int a = 0;
    int b = 0;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("before exchange: a = %d, b = %d", a, b);
    a = a + b;
    b = a - b;
    a = a + b;
    printf("after exchange: a = %d, b = %d", a, b);
    return 0;
}
//
#include <stdio.h>
# define PI 3.14
 int main () {
     float radius = 0;
     float area = 0;
     printf("Enter the value of radius: ");
     scanf("%f", &radius);
     area = PI * radius * radius;
     printf("The result of area: %f\n", area);
     return 0;
}
