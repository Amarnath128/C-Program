// question 1. inpute a sentance and print the number of vowals( a,e,i,o,u) present in there ?
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	char sen[100];
	int i,vowals;
	i=vowals=0;
	
	printf("\n Enter the eoighwiegukwjery : ");
	gets(sen);
	while (sen[i]!='\0')
	{
		if(sen[i]== 'a' || sen[i]== 'e' || sen[i]== 'i' || sen[i]== 'o' || sen[i]== 'u')
		vowals++;
			i++;
		}
		printf("\n Number of vowals in the string : %d ", vowals);
		return 0;
}
