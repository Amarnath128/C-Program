// program to display the name of the days of a week ( switch case )
#include <stdio.h>
#include <conio.h>
int main()
  {
      int n;
    printf("\n Enter the Number between 1 to 7 : ");
    scanf("%d", &n);
    
    switch (n)
     {
     case 1 :
         printf("\n MONDAY ");
         break;
     case 2 :
         printf("\n TUESDAY ");
         break;
     case 3 :
         printf("\n WEDNESDAY ");
         break; 
     case 4 :
         printf("\n THURSDAY ");
         break; 
     case 5 :
         printf("\n FRIDAY ");
         break;
     case 6 :
         printf("\n SUTURDAY ");
         break;
     case 7 :
         printf("\n SUNDAY ");
         break;                  
     default :
         printf("\n ERROR! PLZ ENTER THE VALID NUMBER .");
     }
     return 0;

  }