/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */
15
#include <stdio.h>

int main()
{
   int mark,x;
   float sum=0, average;
   
   for(x=1; x<=2; x++)
   {
      printf("Enter mark %d:", x);
      scanf("%d", &mark);
      sum = sum + mark;
   }
   average = sum / x-1;
   printf("Average  :%.2f", average);
   
   return 0;
}
 
    
  
  