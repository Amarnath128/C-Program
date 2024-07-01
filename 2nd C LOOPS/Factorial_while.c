// find the factorial. using while Loop.
#include <stdio.h>
#include <conio.h>
int main() {
	int num, i, fact=1;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	i=1;
	while(i<=num)
	 {  
	   fact = fact * i;
}
    printf("\n The Factorial is : %d ",fact);
	 return 0;
}
