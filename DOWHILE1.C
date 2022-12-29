//program ro dispaly n natural numbers

#include<stdio.h>
#include<conio.h>

void main()
{
   int i,n;
   clrscr();
   printf("\n\tenter final value");
   scanf("%d",&n);

   i=1;
   do
   {
      printf("\n\t%d",i);
      i++;
   }while(i<=n);
   getch();
}
