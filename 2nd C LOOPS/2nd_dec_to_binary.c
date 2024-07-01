// decimal to Binary.
#include <stdio.h>
#include <conio.h>
int main() {
    int n, d, r, binary=0;

    printf("\n Enter a number : ");
    scanf("%d", &n);
    int temp = 1;
    d = n;
  while(n != 0) {
      r = n % 2;
      n = n / 2;
      binary = binary + r * temp;
      temp = temp * 10;
  }  
  printf("\n %d  is the Binary ", binary );
  return 0;
}