//display odd numbers up to n

#include<stdio.h>
#include<conio.h>

void main()
{
   int i,n;
   clrscr();
   printf("\nenter final value");
   scanf("%d",&n);
   printf("\n\todd numbers up to %d are\n",n);
   i=1;
   while(i<=n)
   {
      printf("\n\t%d",i);
      i=i+2;
   }
   getch();
}
