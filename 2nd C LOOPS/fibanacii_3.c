#include <stdio.h>
int main(){
    int num, a=0, b=1, c;
    printf("\n Enter the Limit you want : ");
    scanf("%d",&num);
    printf(" 0  1 ");
     do {
         c = a + b;         // 1 = 0 + 1 , 2=1+1, 3 = 1 + 2. 
         printf("%d  ",c);
         a = b;            
         b = c;
         num--;
     }
    while(num > 2);        // ends at the number that u entered in limit.

    return 0; 
}