// find the highest value.
#include <stdio.h>
#include <conio.h>
int high(int*);
int main()
{
	int ar[10];
	int *p=ar,k;
	k=high(p);
	printf("\n the highest value %d ",k);
	return 0;
}
int high(int *k)
{
	int i,g=*k;
	for(i=0;i<10;i++)
	{
		if(*k>g)
		g=*k;
	   k++;
	}
	return g;
}
