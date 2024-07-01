//find the (2^3)=8 program to read the the power and calculate its result.
#include <stdio.h>
#include <conio.h>
int ans(int bnum,int i)
{
	int o;
	if(i!=0)
		return (bnum*ans(bnum,i-1));
		else
		return 1;
	

}
int main()
{
	int i,bnum,p;
	printf("\n Enter the base number >>");
	scanf("%d",&bnum);
	printf("\n Enter the power  >> ");
	scanf("%d",&i);
	p=ans(bnum,i);
	printf("\n the result is >> %d%d =%d",bnum,i,p);
	return 0;
}

