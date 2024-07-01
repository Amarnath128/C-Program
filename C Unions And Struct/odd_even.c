#include <stdio.h>
#include <conio.h>
union odd_even
{
      int num;
}call;
int main()
{
     printf("\n Enter a number : ");
     scanf("%d" , &call.num);

     if(call.num % 2 == 0)
      {
          printf("\n %d is an Even number .",call.num);
      }
      else if(call.num % 2 == 1)
      {
          printf("\n %d is an Odd number.",call.num);
      }
      return 0;
}