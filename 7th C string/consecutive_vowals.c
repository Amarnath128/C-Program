// find the consecutive vowals?
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	int i,count=0;
	char s[100],s1,s2;
	printf("\n Enter the string : ");
	gets(s);
	for(i=0;i<strlen(s);i++)
	{
		s1=s[i];
		s2=s[i+1];
		if((s1=='A' ||s1=='E' ||s1=='I' ||s1=='O' ||s1=='U' || s1=='a' ||s1=='e' ||s1=='i' ||s1=='o' ||s1=='u')
		&& (s2=='A' ||s2=='E' ||s2=='I' ||s2=='O' ||s2=='U' || s2=='a' ||s2=='e' ||s2=='i' ||s2=='o' ||s2=='u'))
	{
		count++;
	}
	}
	printf("\n the consecutive vowals in the string are : %d",count);
	getch();
	return 0;
}
