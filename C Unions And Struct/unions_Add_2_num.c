#include <stdio.h>
#include <conio.h>
union Add_2_num
{
     int a, b, sum;

}ob1, ob2, obsum;
int main() 
 {
     printf("\n Enter the First number : ");
     scanf("%d" , &ob1.a);

     printf("\n Enter the Second number : ");
     scanf("%d" ,&ob2.b);

    obsum.sum = ob1.a + ob2.b;

    printf("\n The sum of %d and %d is : %d" , ob1.a, ob2.b, obsum);
    return 0;
 }
