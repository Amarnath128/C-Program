#include <stdio.h>
#include <conio.h>
union  job
{
    int sal;
    int nowork;
}obs, obnw;

int main() 
{
    printf("\n Enter the salary : ");
    scanf("%d",&obs.sal);

    printf("\n Enter the No of Workers : ");
    scanf("%d",&obnw.nowork);

    printf("\n ...............display......................>\n");

    printf("\n The Salary is : %d ",obs.sal);
    printf("\n The number of Workers : %d ", obnw.nowork);

    return 0;
}
