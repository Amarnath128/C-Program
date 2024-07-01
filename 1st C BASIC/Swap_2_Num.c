// Program to swap two number.

#include <stdio.h>
int main() {
	 int a, b, swap;
	
 	printf(" Enter The First Number : ");
 	scanf("%d" ,&a);
	
 	printf("\nEnter The Second Number :");
 	scanf("%d" ,&b);
	
	  swap = a;
	     a = b;
	     b = swap;
	
	 printf("\n After Swapping , First Number : %d ",a);
 	printf("\n After Swapping , Second Number : %d ",b);
	
 	return 0;
}
