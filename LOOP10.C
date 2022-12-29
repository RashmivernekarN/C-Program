//sum of n natural numbers using do while
#include<stdio.h>
#include<conio.h>

void main()
{
   int i,n,sum=0;
   clrscr();
   printf("\nenter final value");
   scanf("%d",&n);
   printf("\n\tNATURAL NUMBERS ARE\n");
   i=1;
   do
   {
      printf("\t%d\n",i);
      sum=sum+i;
      i++;
   }   while(i<=n);
   printf("\n\tsum=%d",sum);
   getch();
}