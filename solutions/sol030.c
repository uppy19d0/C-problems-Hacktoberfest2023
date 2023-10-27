#include<stdio.h>

int main()
{
   // Defining function
   int a=0, b=1, range, c, sum=0;
   printf("Enter the number: ");
   scanf("%d",&range);

   // Defining user input manual

   printf("The fibonacci series is: \n");

   // while loop for valid number insertion
   while( a <= range )
   {
      printf("%d\t",a);
      sum += a;
      c = a + b;
      a = b;
      b = c;
   }

   printf("\nTheir sum is  = %d", sum);

   return 0;
}
