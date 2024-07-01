/* 1. Start
2. Set LA[K-1] = ITEM
3. Stop
 */

#include <stdio.h>

int main() {
   int LA[] = {1,3,5,7,8};
   int k = 4, n = 5, item = 12;
   int i, j;
   
   printf("The original array elements are :\n");
	
   for(i = 0; i<n; i++) {
      printf("LA[%d] = %d \n", i, LA[i]);
   }
    
   LA[k-1] = item;

   printf("The array elements after updation :\n");
	
   for(i = 0; i<n; i++) {
      printf("LA[%d] = %d \n", i, LA[i]);
   }
   return 0;
}