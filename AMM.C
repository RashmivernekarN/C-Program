/* pgm to check whether the given yr is leap year or not using conditional operator*/

#include<stdio.h>
#include<conio.h>
void main()
{
int yr;
clrscr();
printf("\n enter any year");
scanf("%d",&yr);
(yr%4==0)?printf("\n leap year"):printf("\n not a leap year");
getch();
}
