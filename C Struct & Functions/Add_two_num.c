#include <stdio.h>
#include <conio.h>
struct Add
{
    int a, b, sum;
}ob;

int main()
{
    printf("\n Enter the First number : ");
    scanf("%d",&ob.a);

    printf("\n Enter the Second number : ");
    scanf("%d",&ob.b);

    ob.sum = ob.a + ob.b;

    printf("\n The sum of the two number is : %d",ob.sum);
    return 0;
}
