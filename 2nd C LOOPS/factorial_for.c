// find the factorial. using for Loop. 
// Like if user enters 6 then Factorial should be equal to factorial= 1*2*3*4*5*6.
#include <stdio.h>
int main() {
	int num, i, fact=1;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	
	for(i=1; i<=num; i++)
	 {  
	   fact = fact * i;
}
	 	printf("\n The Factorial of %d is : %d ", num,fact);
	 return 0;
}
