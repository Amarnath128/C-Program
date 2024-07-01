// input two number and using pointer interchange their value ?
#include <stdio.h>
#include <conio.H>
int main()
{
	int a,b;
	int *x,*y,intc;
printf("\n ENTER THE VALUE OF x and y :\n");
scanf("%d%d",&a,&b);
printf("\n \n");
	x=&a;
	y=&b;
 intc=*y;
        *y=*x;
*x=intc;
   printf("\n the value of x :%d",*x);
   printf("\n the value of y :%d",*y);
   getch();
   return 0;
}
