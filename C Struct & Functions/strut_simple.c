struct student
{
    char name[50];
    int age;
    int roll;
    float mark;
}stud;

int main() 
 {
     strcpy(stud.name,"Amarnath patro");
     stud.age = 21;
     stud.roll = 3;
     stud.mark = 75.50;

    printf("\n Name : %s ",stud.name);
    printf("\n Age : %d",stud.age);
    printf("\n Roll No : %d",stud.roll);
    printf("\n Persentage : %.2f",stud.mark);

    return 0; 
 }
