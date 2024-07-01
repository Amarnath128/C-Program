// find the factorial. using while Loop.
#include <stdio.h>
int main() {
	int num, i, fact=1;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	i=1;
	while(i<=num)
	 {  
	   fact=fact*i;
	   i++;
}
	 	printf("\n The Factorial of %d is : %d ", num,fact);
	 return 0;
}
