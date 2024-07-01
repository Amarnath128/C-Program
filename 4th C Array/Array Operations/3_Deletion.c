/* Algorithm
Consider LA is a linear array with N elements and K is a positive integer such that K<=N.
 Following is the algorithm to delete an element available at the Kth position of LA.

1. Start
2. Set J = K
3. Repeat steps 4 and 5 while J < N
4. Set LA[J] = LA[J + 1]
5. Set J = J+1
6. Set N = N-1
7. Stop */  

#include <stdio.h>

int main() {
   int LA[] = {1,3,5,7,8};
   int k = 1, n = 5;        // k = which item to be delete.
   int i, j;
   
   printf("The original array elements are :\n");
	
   for(i = 0; i<n; i++) {
      printf("LA[%d] = %d \n", i, LA[i]);
   }
    
   j = k;
	
   while( j < n) {
      LA[j-1] = LA[j];
      j = j + 1;
   }
	
   n = n -1;
   
   printf("The array elements after deletion :\n");
	
   for(i = 0; i<n; i++) {
      printf("LA[%d] = %d \n", i, LA[i]);
   }
   return 0;
}