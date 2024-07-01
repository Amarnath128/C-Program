// Program t check Leap Year or not.
#include <stdio.h>
int main() {
	int year;
	
   	 printf(" Enter a Year : ");
	 scanf("%d", &year);
	 
	 if(year % 4 ==0) 
	  {
	  	printf("\n %d is a Leap Year.",year);
	  }
	      else if(year % 400 ==0)
	       {
	     	 printf("\n %d is a Leap Year.",year);
	     }
	       else if(year % 100 == 0) 
	            {
	              printf("\n %d is not a Leap Year.",year);
	           }
      else {
             printf("\n %d is not a Leap Year. ",year);	
	  }
	  return 0;
}