// Fibonacci Series .
#include <stdio.h>
int main()
  {
  	int i, n, t1=0, t2=1;
    int next=t1+t2;
  	
  	printf(" Enter the number of Trems : ");
  	scanf("%d",&n);
  	
  	printf("\n Fibonacci Series : %d, %d, ",t1,t2);
  	 
  	 for(i=3 ; i<=n ; i++) {
  	 	
  	 	printf("%d, ",next);
  	 	t1 = t2;
  	 	t2 = next;
  	 	next = t1 + t2;
	   }
	   return 0;
  }
