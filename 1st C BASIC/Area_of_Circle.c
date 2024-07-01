//  program to find the area of the circle.

#include<stdio.h>
#include<conio.h>
int main() 
{
	int r;
	int  area;
	
	   printf("Enter the Radius of the circle = ");
	   scanf("%d",&r);
	   
       area = 3.14 *(r * r);
       
	 printf("\n the Area of the circle is : %d",area);
    
    return 0;
	
}
