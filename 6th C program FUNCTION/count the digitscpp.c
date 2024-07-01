// to count the digits of given numbers
#include <stdio.h>
#include <conio.h>
int sum(int,int );
int main()
{
	int n,s=0;
	printf("\n Enter The Number ");
	scanf("%d",&n);
	printf("\n sum of the digits =%d",sum,(n,s));
	return 0;
}
 int sum(int n,int s)
{
	int i,k;
k=n%10;
if(i!=0)
i++;
 sum(i,s);
 return s;

 } 
