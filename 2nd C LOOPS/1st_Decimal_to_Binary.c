// program to convert Decimal no to binary number.
#include <stdio.h>
#include <conio.h>
int main() {
    int arr[10], num, i, j;

printf("\n ..... DESIMAL TO BINARY .....");
printf("\n Enter a Number : ");
scanf("%d", &num);

  printf("\n The Binary of %d is : ", num);
 for(i = 0; num > 0; i++){
     arr[i] = num % 2;
     num = num / 2;
 }
  for(j = i-1; j >= 0; j--){
      printf(" %d ", arr[j]);
  }
  printf("\n");
return 0;
}

