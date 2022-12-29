//program to display n natural numbers and find there sum using while loop

#include<stdio.h>
#include<conio.h>

void main()
{
   int i,n,sum=0;
   clrscr();
   printf("\n\tenter final value");
   scanf("%d",&n);
   printf("\n\tNatural Numbers Are\n");
   i=1;
   while(i<=n)
   {
      printf("\n\t%d",i);
      sum=sum+i;
      i++;
   }
   printf("\n\tsum of natural numbers are=%d",sum);
   getch();
}