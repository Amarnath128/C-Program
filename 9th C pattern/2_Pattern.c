#include <stdio.h>
int main() {
	int row, col;
	printf(" 2 Pattern : \n\n");
	 for(row=1; row<=7; row++) {
	 	for(col=1; col<=5; col++) {
	 		if(row==1 || row==4 || row==7 ||col==5 && row<4|| (col==1 && row>=4)) {
	 			printf(" *");
			 }
			 else {
			 	printf("  ");
			 }
		 }
		 printf("\n");
	 }
	 return 0;
}
