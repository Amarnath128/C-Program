#include <stdio.h>
int main() {
	int row,col;
	
	printf("The 1 Pattern : \n");
	for(row=1; row<=7; row++) {
		for(col=1; col<=7; col++) {
			if(col==4 ) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
