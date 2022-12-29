//program to find sum of 2 numbers

#include<stdio.h>
#include<conio.h>

void main()
{
   int a,b,sum;
   clrscr();
   printf("\n\n\tenter 2 integer values");
   scanf("%d%d",&a,&b);
   sum=a+b;
   printf("\n\n\ta=%d\n\n\tb=%d\n\n\tsum=%d",a,b,sum);
   getch();
}