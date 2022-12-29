//program to display result of a student
#include<stdio.h>
#include<conio.h>
void main()
{
   float p;
   clrscr();
   printf("\nenter percentage of a student");
   scanf("%f",&p);
   if(p>=85)
      printf("\n\tDISTINCTION");
   else if(p>=60)
      printf("\n\tFIRST CLASS");
    else if(p>=50)
	printf("\n\tSECOND CLASS");
     else if(p>=35)
	printf("\n\tPASS");
     else
	 printf("\n\tFAIL");
    getch();
}
