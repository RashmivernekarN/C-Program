//program to check the entered number is Even or odd
#include<stdio.h>
#include<conio.h>

void main()
{
  int n;
  clrscr();
  printf("\n\tenter value for n");
  scanf("%d",&n);
  (n%2==0)?printf("\n\t%d is EVEN",n):printf("\n\t%d is ODD",n);
  getch();
}