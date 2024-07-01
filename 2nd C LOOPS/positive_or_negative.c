// ckeck positive or negative using if. else if.
#include <stdio.h>
int main() 
 {
 	int number;
 	printf(" Enter a Number : ");
 	scanf("%d", &number);
 	
 	   if(number > 0) {
 	   	 printf("\n %d is a Positive Number. ",number);
		}
		else if(number < 0) {
			printf("\n %d is a Negative Number.",number);
		}
		else {
			printf("\n You Entered 0.");
		}
		return 0;
 }
