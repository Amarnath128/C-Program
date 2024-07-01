//    PROGRAM TO CALCULATE BILL OF INTERNET BROWSING :
//    THE CONDITIONS ARE BELLOW : 
//   1) 1 Hours -->  20 Rupees.  2) 1/2 Hours --> 5 Rupees.   3) 5 Hours --> 100 Rupees.....

#include <stdio.h>
#include <conio.h>
int main(){

    int hour, rupee;
    printf("\n Enter the number of Hours the user had browsed internet : ");
    scanf("%d", &hour);
    
    rupee = 20 * hour;
   printf("\n The User will Pay '%d Rupees' .",rupee);

   return 0;
} 