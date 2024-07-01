// Program to find the Size of Variables.
#include <stdio.h>
#include <conio.h>
int main()
 {
 	 int intType;
 	 float floatType;
 	 double doubleType;
 	 char charType;
 	 
 	 printf(" \nSize Of INT  : %zu Bytes. \n", sizeof(intType));
     printf(" \nSize Of FLOAT  : %zu Bytes. \n", sizeof(floatType));
	 printf(" \nSize Of DOUBLE  : %zu Bytes. \n", sizeof(doubleType));
	 printf(" \nSize Of CHAR  : %zu Bytes. \n", sizeof(charType));
	 
	 return 0; 	 
 }
 
