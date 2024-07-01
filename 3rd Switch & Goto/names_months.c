// program to display the name of the month of a year ( switch case )
#include <stdio.h>
#include <conio.h>
int main()
  {
      int n;
    printf("\n Enter the Number between 1 to 12 : ");
    scanf("%d", &n);
    
    switch (n)
     {
     case 1 :
         printf("\n JANUARY ");
         break;
     case 2 :
         printf("\n FEBRUARY");
         break;
     case 3 :
         printf("\n MARCH ");
         break; 
     case 4 :
         printf("\n APRIL ");
         break; 
     case 5 :
         printf("\n MAY ");
         break;
     case 6 :
         printf("\n JUNE ");
         break;
     case 7 :
         printf("\n  JULY ");
         break;
    case 8 :
         printf("\n AUGUST ");
         break; 
    case 9 :
         printf("\n SEPTEMBER ");
         break;
    case 10 :
         printf("\n OCTOBER ");
         break; 
    case 11 :
         printf("\n NOVEMBER ");
         break;    
    case 12 :
         printf("\n DECEMBER ");
         break;  
    default :
         printf("\n ERROR! PLZ ENTER THE VALID NUMBER .");
     }
     return 0;
  }                  