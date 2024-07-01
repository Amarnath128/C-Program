// program to check a number is prime or not.
#include <stdio.h>
int main() 
 {
 	int n, m=0, i, flag=0;
 	printf("Enter a number : ");
 	scanf("%d", &n);
 	m=n/2;
 	
 	for(i=2; i<=m; i++)
 	   {
 	   	 if(n % i == 0) {
 	   	 	printf("\n The %d is not a Prime number.",n);
 	   	 	flag=1;
				 break;
			 }
		}
		if(flag==0) {
			printf("\n The %d is Prime number.",n);
		}
		return 0;
 }