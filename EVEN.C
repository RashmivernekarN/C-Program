//program to check whether the entered number is even or odd
#include<stdio.h>
#include<conio.h>

void main()
{
   int n;
   clrscr();
   printf("\n\tenter value for n");
   scanf("%d",&n);
   if(n%2==0)
     printf("\n\t%d is EVEN",n);
    else
      printf("\n\t%d is ODD",n);
   getch();
}