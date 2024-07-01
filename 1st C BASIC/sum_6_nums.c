// program to find the sum of any 6 numbers .
#include <stdio.h>
#include <conio.h>
int main() 
 {
     int n1, n2, n3, n4, n5, n6, sum, avg;

     printf("\n Enter Any 6 numbers : ");
     scanf("%d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6);

     sum = n1 + n2 + n3 + n4 + n5 + n6;
     avg = sum / 6 ;
  printf("\n The Sum of these 6 numbers is : %d ",sum);
  printf("\n The Average of these 6 numbers is : %d ",avg);

  return 0;   
 }