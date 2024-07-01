// input any 10 numbers in array and find the greatest among them?
#include<stdio.h>
#include<conio.h>
int main()
{
 int a=1, n,s=0;
 int ar[10];
 printf("\n Enter a number ");
 scanf("%d", &n);
 s=n;
 while(a<=9)
{
 	printf("\n Enter a number ");
 	scanf(" %d", &n);
 	if(n<s)
 	s=n;
 	a++;
	}	
	printf("\n THE REDULT is %d",s);
	getch();
	return 0;
}
