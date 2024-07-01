 //                     how you can Pass structures to a functions.                            

#include <stdio.h>
#include <conio.h>
struct student                         // struct created
{
    char name[40];
    int roll, age;
}ob1 ;                                  // an object is created to call all variables.

void display(struct student s);        // function created.

int main() 
{
     /* struct student ob1; */
    printf("\n Enter the Name : ");
    scanf("%s",&ob1.name);
      
    printf("\n Enter the Roll No : ");
    scanf("%d",&ob1.roll);

    printf("\n Enter the Age : ");
    scanf("%d",&ob1.age);
    
    display(ob1);                      // passing struct as an argument.
    return 0;
}
void display(struct student s)
 {
     printf("\n -----------------Details-----------------\n");
     printf("\n The Name is : %s",s.name);
     printf("\n The Roll No : %d",s.roll);
     printf("\nThe Age is : %d",s.age);
 }

