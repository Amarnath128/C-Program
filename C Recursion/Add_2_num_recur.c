// Sum of Natural Numbers Using Recursion like u entered 5 (1+2+3+4+5 = 15) the out put will be 15.
#include <stdio.h>
int sum(int n);                      // here the function had created

int main() {
    int number, result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = sum(number);          // here the function_name( sum ) declared.

    printf("sum = %d", result);
    return 0;
}

int sum(int n) {
    if (n != 0)
                       // sum() function calls itself
        return n + sum(n-1);         
    else
        return n;
}

