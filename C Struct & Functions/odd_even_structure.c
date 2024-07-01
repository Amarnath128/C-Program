#include <stdio.h>
#include <conio.h>
struct Even_odd
{
    int num;
}ob;
int main() 
 {
     printf("\n Enter a number : ");
     scanf("%d" , &ob.num);

     if(ob.num % 2 == 0)
      {
          printf("\n %d is an Even number .",ob.num);
      }
      else if(ob.num % 2 == 1)
      {
          printf("\n %d is an Odd number.",ob.num);
      }
      return 0;
 }