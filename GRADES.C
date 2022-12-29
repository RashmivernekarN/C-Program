//program to display remarks of students

#include<stdio.h>
#include<conio.h>

void main()
{
char A,B,C,D,F,ch;
clrscr();
printf("Enter the grade that you obtained\n");
scanf("%c",&ch);
switch(ch)
{
case 'A':printf("Your performance is EXCELLENT!\n");
	break;

case 'B':printf("Your performance is AVERAGE\n");
	 break;

case 'C':printf("Your performance is POOR\n");
	 break;

case 'D':printf("You just passed\n");
	 break;

case 'F':printf("You have FAILED\n");
	 break;

default:printf("INVALID GRADE!");
       break;

}

getch();
}