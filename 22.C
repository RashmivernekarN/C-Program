/*prg to check whether given  year is leap yr or not using conditional operator */
#include<stdio.h>
#include<conio.h>
void main()
 {
   int yr;
   clrscr();
   printf("\n Enter any yr");
   scanf("%d",&yr);
   (yr%4==0)? printf("\n %d is leap year",yr):printf("\n %d is not a leap year",yr);
   getch();
 }