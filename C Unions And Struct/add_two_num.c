#include <stdio.h>
union add
{
    int a, b, sum;
}ob1, ob2, obs;

int main() {

    printf("\n Enter the First number : ");
    scanf("%d",&ob1.a);

    printf("\n Enter the Second number : ");
    scanf("%d", &ob2.b);

    obs.sum = ob1.a + ob2.b;

    printf("\n The sum of %d and %d is : %d", ob1.a, ob2.b, obs.sum);

    return 0;
}