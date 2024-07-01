// program to convert Decimal to Octal.
#include <stdio.h>
#include <conio.h>
int main() {
    int num, octal=0, rem,  i=1;

   printf(" Enter a Decimal Number : ");
   scanf("%d",&num);
    while(num != 0) 
         {
            rem = num % 8;
            octal = (rem*i) + octal;
          num = num / 8;
         i = i * 10;     
         }
    printf("\n The Ocatl is : %d ", octal);
    return 0;
}