#include <stdio.h> 
int main() {
int num = 0;
int num1 = 0;
int num2 = 0;
int maximum = 0;
   
printf("Enter three numbers and (-1) for left: ");
scanf("%d %d %d", &num, &num1, &num2);
  
if ( num ==  -1 || num1 == -1 || num2 == -1) {
return 0;
 }
 
if (num > maximum) {
   maximum = num;
}
  
if (num1 > maximum){
   maximum = num1;
}
  
 if (num2 > maximum) {
     maximum = num2;
 }
  
  printf("The greatest positive number %d", maximum);
  
   return 0;
}
                            
