//  PROGRAM TO DISPLAY THE RAINBOW COLOURS . R = RED......
#include <stdio.h>
#include <conio.h>
int main()
  {
      char colour;
    printf("\n Enter one ALPHABET outof ( R , O , Y, G , I , V ) : ");
    scanf("%c", &colour);

  switch (colour)
  {    
    case 'r':
      printf("\n RED");
      break;

      case 'o':
      printf("\n ORANGE");
      break;

      case 'y':
      printf("\n YELLOW");
      break;

      case 'g':
      printf("\n GREEN");
      break;

      case 'i':
      printf("\n INDIGO");
      break;

      case 'v':
      printf("\n VIOLET");
      break;

      default:
      printf("\n ERROR! PLZ ENTER THE CORRECT CAHR...");
  } 
    return 0;
}     