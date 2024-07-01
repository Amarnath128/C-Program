// Program to calculate Quotient and Reminder.
#include <stdio.h>
int main()
 {
 	int a, b, quotient, reminder;
 	
 	printf(" Enter the Dividend : ");
 	scanf(" %d", &a);
 	
 	printf("\n Enter the Divisor: ");
 	scanf("%d", &b);
 	
 	quotient = a / b;
 	reminder = a % b;
 	
 	printf("\n The Quotient is : %d",quotient);
 	printf("\n The Reminder is : %d",reminder);
 	
 	return 0;
 }
