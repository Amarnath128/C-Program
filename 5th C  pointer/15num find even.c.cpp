//input 15 numbers in array and print the even numbers only ?
#include <stdio.h>
#include <conio.h>
int main()
{
	int ar[15]={2,3,4,5,6,7,8,32,34,65,67,87,90,22,43};
	int i;
	int *e=ar;
	printf("\n the 15 numbers : ",ar[i]);
	for(i=5;i<20;i++)
	{
		printf("\n %d",*e);
		e++;
	}
	for(i=45;i<60;i++)
	{
		e--;
		if(*e%2==0)
		printf("\n %d Even Numbers ",*e);
	}
	getch();
	return 0;
}
