// input a sentance and print how many space, capital and small letters are there ?
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char str[1000];
	int i=0,space=0,upperchar=0,lowerchar=0;
	printf("\n Enter the sentance : ");
	gets(str);
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		{
			space++;
		}
		else if (str[i]>='A' && str[i]<='Z')
		{
		    upperchar++;
		}
		else if (str[i>='a'] && str[i]<='z')
		{
		 lowerchar++;
     	}
     	i++;
}


	printf("\n THE NUMBER OF SPACE in the string: %d",space);
	printf("\n THE NUMBER OF CAPITAL LETTERS IN THE STRING :%d",upperchar);
	printf("\n the number of small letters in the string :%d",lowerchar);
	getch();
	return 0;
}
