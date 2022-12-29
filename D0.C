#include<stdio.h>
#include<conio.h>

void main()
{
   int i,n;
   clrscr();
   i=50;
   n=100;
   printf("\nNUMBERS DIVISABLE BY 5 FROM 50 TO 100 ARE\n");
   do
   {
     if(i%5==0)
     printf("\t%d\n",i);
     i++;
   }
   while(i<=n);
   getch();
}