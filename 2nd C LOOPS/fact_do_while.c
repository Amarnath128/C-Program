// find the factorial. using do...while Loop.
#include <stdio.h>
int main() {
	int num, i=1, fact=1;
	
	  printf("Enter the number : ");
	  scanf("%d",&num);
	do {
		fact = fact * i;
		i++;
	}
		while(i<=num);{
	 printf("\n The Factorial of %d is : %d ", num,fact);
    }
	 return 0;
}
