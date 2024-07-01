// sum of natural number using while loop.#include <stdio.h>
#include <stdio.h>
int main() {
	 int num, i, sum=0;	
	  printf(" Enter a number : ");
	  scanf("%d", &num);
	   
	i=1;
	while(i<=num) {
	   	sum=sum+i;
	   	i++;
	   }
	   printf("\n Sum is : %d",sum);
	   return 0;
   }
	   
