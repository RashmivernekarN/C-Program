/*check whether the the entered number is positive or nagetive
using conditional operators*/

#include<stdio.h>
#include<conio.h>

void main()
{
   int n;
   clrscr();
   printf("\n\tenter value for n");
   scanf("%d",&n);
   (n>0)?printf("\n\t%d is POSITIVE",n):printf("\n\t%d is NAGETIVE",n);
   getch();
}