//program to display reverse numbers from n
#include<stdio.h>
#include<conio.h>

void main()
{
   int i,n;
   clrscr();
   printf("\n\tenter final value");
   scanf("%d",&n);
   i=1;
   do{
   printf("\n\t%d",n);
   n--;
   }while(i<=n);
   getch();
}