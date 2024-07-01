// 4 pattern.
#include <stdio.h>
int main() {
	int i, j;
printf("The 3 Pattern : \n");
	     for(i=1; i<=5; i++){
	     	for(j=1; j<=5; j++){
	     		
	     		if(i==3 || j==5 || j==1 && i<=3){
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
