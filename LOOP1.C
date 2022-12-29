//to display product of n natural numbers

#include<stdio.h>
#include<conio.h>

void main()
{
   int i,n,p=1;
   clrscr();
   printf("\n\tenter final value");
   scanf("%d",&n);
   i=1;
   do
   {
      printf("\n\t%d",i);
      p=p*i;
      i++;
    } while(i<=n);
    printf("\n\tproduct=%d",p);
    getch();
}