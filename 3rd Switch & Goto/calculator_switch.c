// Program to create a simple calculator.
#include <stdio.h>
#include <conio.h>
int main()
  {
  	char op;
  	int n1,n2;
  	
  	printf("Enter any one Operator [ + - * / ] : ");
  	scanf("%c",&op);
  	
  	 printf("\n Enter the First Number : ");
  	 scanf("%d",&n1);
  	 printf("\n Enter the Second Number : ");
  	 scanf("%d",&n2);
  	 
  	 switch(op)
  	 {
  	 	case '+' :
  	 		
  	 		printf("\n %d + %d = %d",n1, n2, n1+n2);
  	 		break;
  	 		
  	 	case '-' :
		    printf("\n %d - %d = %d", n1, n2, n1-n2);
		    break;
		    
		case '*' :
			printf("\n %d * %d = %d",n1, n2, n1*n2);
			break;
			
		case '/' :
			printf("\n %d / %d = %d",n1, n2, n1/n2);
			break;
		default :
				
			printf("\n ERROR! ...OPERATOR IS NOT CORRECT. ");	
	   }
	   return 0;
  }
