// Fibonacci Series .
#include <stdio.h>
int main() 
{
 	int i, num, t1=0, t2=1, next=0;
	
 	printf(" Enter the number of Term : ");
   	scanf("%d", &num);
	 
	  for(i=1; i<=num; i++)
	   {
	   	if(i==1) {
	   		printf("%d, ",t1);
		   }
		if(i==2) {
		   	printf("%d, ",t2);
		   }
		   next = t1 + t2;
		   t1 = t2;
		   t2 = next;
		   printf("%d, ",next);
	   }
	   return 0;
}
