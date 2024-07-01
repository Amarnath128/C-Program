// Program to find the Largest Number Among 3 numbers. (else if)
#include <stdio.h>
#include <conio.h>
int main() 
 {
 	int a, b, c;
 	
 	printf(" Enter the First number : ");
 	scanf("%d", &a);
 	  
 	   	printf(" Enter the Second number : ");
 	    scanf("%d", &b);
 	     
 	     	printf(" Enter the Third number : ");
 	        scanf("%d", &c);
 	if(a>=b && a>=c) {
 		printf("\n %d Is The Largest Number.",a);
	 } 
	else if(b>=a && b>=c) {
		printf("\n %d Is The Largest Number.",b);
	}        
	else { 
	    printf("\n %d Is The Largest Number. ",c);	
	}
	return 0;
 }
