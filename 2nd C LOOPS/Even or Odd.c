// Program to check Even or Odd.
#include <stdio.h>
int main() {
	  int number;
	  printf(" Enter a Number : ");
	  scanf("%d", &number);
	 
	  if(number % 2 == 0) {
	  	printf("\n The %d Is Even.",number);
	  }
	  else {
	  	printf("\n The %d Is Odd.",number);
	  }
	 return 0; 
}
