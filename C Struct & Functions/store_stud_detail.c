#include<stdio.h>
#include<conio.h>
struct student
{
    char name[30];
    int roll;
    float mark;
}ob;

int main() {

    printf("\n Enter Name : ");
    scanf("%s",&ob.name);

    printf("\n Enter Roll no : ");
    scanf("%d",&ob.roll);

    printf("\n Enter Mark :");
    scanf("%f",&ob.mark);

    printf("\n ...............The Student Details...............");
    
    printf("\n Name : %s",ob.name);
    printf("\n Roll No : %d",ob.roll);
    printf("\n Mark : %.2f",ob.mark);
    
    return 0;
}
