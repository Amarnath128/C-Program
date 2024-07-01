// Half Pyramid After 180* rotation.
#include <stdio.h>
int main() {
	int n, row, col;
	printf("Enter the Limit : ");
	scanf("%d",&n);
	 for(row=1; row<=n; row++){
	 	for(col=1; col<=n; col++){
	 		if(col<=n - row){
	 			printf(" ");
			 }
			else {
				printf("*");
			} 
		 }
		 printf("\n");
	 }
	 return 0;
}
