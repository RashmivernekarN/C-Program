//program to check whether the given year is leap year
#include <stdio.h>
#include <conio.h>
void main()
{
	int year;
	clrscr();
	printf("enter the year\n");
	scanf("%d",&year);
	if(year%4==0)
	printf("\nleap year");
	else
	printf("not a leap year\n");
	getch ();
}