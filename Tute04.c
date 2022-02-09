/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   
   int maximum(int num1, int num2);
   {
      return (num1>num2) ? num1: num2;
   }
   
   int minimum(int num1, int num2)
   {
      return(num1 > num2) ? num2 : num1;
   }
   int multyplay(int num1, int num2)
   {
      return num2 * num1;
   }
   return 0;
}
