//program to swap 2 numbers

#include<stdio.h>
#include<conio.h>

void main()
{
   int a,b,t;
   clrscr();
   printf("\n\tenter 2 integer values");
   scanf("%d%d",&a,&b);
   printf("\n\tBEFORE SWAPPING THE VALUES ARE\n");
   printf("\n\ta=%d\n\tb=%d\n",a,b);
   t=a;
   a=b;
   b=t;
   printf("\n\tAFTER SWAPPING THE VALUES ARE\n");
   printf("\n\ta=%d\n\tb=%d\n",a,b);
   getch();
}