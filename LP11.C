//display even numbers from 50 to 100

#include<stdio.h>
#include<conio.h>

void main()
{
   int i=50,n=100;
   clrscr();
   printf("\neven numbers from 50 to 100");
   while(i<=n)
   {
      printf("\t%d",i);
      i=i+2;
   }
   getch();
}