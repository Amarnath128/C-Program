// find the lowest value.
#include <stdio.h>
#include <conio.h>
int low(int*);
int main()
{
	int ar[10]={31,12,31,42,21,7,43,92,12,32};
	int *p=ar,k;
	k=low(p);
	printf("\n the lowest value %d ",k);
	return 0;
}
int low(int *k)
{
	int i,g=*k;
	for(i=0;i<10;i++)
	{
		if(*k<g)
		g=*k;
	   k++;
	}
	return g;
}
