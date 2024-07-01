// string example 3.
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	int i,l;
	char *ch;
	char x[9]={'A','m','a','r','n','a','t','h','\0'};
	ch = strchr(x,'am');
	printf("\n %s",ch);
	return 0;
	
}
