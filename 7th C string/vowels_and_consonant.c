// PROGRAM TO FIND VOWELS AND CONSONANT.
#include<stdio.h>
#include<conio.h>
int main() {
    char alp;
    int lower, upper;

    printf("\n Enter a Alphabet : ");
    scanf("%c", &alp);
    
    lower = ( alp == 'a' || alp == 'e' || alp == 'i' || alp == 'o' || alp =='u');

    upper = ( alp == 'A' || alp == 'E' || alp == 'I' || alp == 'O' || alp =='U');
    
    if( lower || upper){
        printf("\n %c is a VOWELS.", alp);
    }
    else{
        printf("\n %c is a CONSONANT.", alp);
    }
   return 0;
}