// program to display remarks of the student depends on their grade
#include<stdio.h>
#include<conio.h>
void main()
{
   char g;
   clrscr();
   printf("\nenter any grade");
   scanf("%c",&g);
   switch(g)
   {
      case 'A':
      case 'a':printf("EXCELLENT");
	       break;
      case 'B':
      case 'b':printf("VERY GOOD");
	       break;
      case 'C':
      case 'c':printf("GOOD");
	       break;
      case 'D':
      case 'd':printf("POOR");
		break;
       default:printf("ENTER VALID GRADE");
	      break;
     }
     getch();
}