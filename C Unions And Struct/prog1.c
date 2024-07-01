#include<stdio.h>
union A
{
    int n1, n2;
}ob, ob1;

int main() {

    printf("\n Enter the First number : ");
    scanf("%d",&ob.n1);

    
    printf("\n Enter the second number : ");
    scanf("%d",&ob1.n2);

   printf("\n The number u enterrd are : %d  and %d",ob.n1, ob1.n2 );

   return 0;

}