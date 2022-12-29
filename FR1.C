//program to display sum of n natural numbers using for loop

#include<stdio.h>
#include<conio.h>

void main()
{
   int i,n,s=0;
   clrscr();
   printf("\nenter final value");
   scanf("%d",&n);
   printf("\n\tNatural Numbers are\n");
   for(i=1;i<=n;i++)
   {
      printf("\n\t%d",i);
      s=s+i;
   }
   printf("\n\tsum of natural numbers up to %d are=%d",n,s);
    getch();
}

