//program to display n natural numbers using while loop

#include<stdio.h>
#include<conio.h>

void main()
{
   int i,n;
   clrscr();
   printf("\n\tenter final value");
   scanf("%d",&n);
   printf("\n\tNatural Numbers Are\n");
   i=1;
   while(i<=n)
   {
      printf("\n\t%d",i);
      i++;
   }
   getch();
}