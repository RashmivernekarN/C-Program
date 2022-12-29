//program to find product of odd numbers up to n
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
      i=i+2;
   }while(i<=n);
   printf("\n\tproduct of odd numbers =%d",p);
   getch();
}