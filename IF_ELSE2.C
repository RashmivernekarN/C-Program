//program to check whether m is divisable by n or not

#include<stdio.h>
#include<conio.h>

void main()
{
   int m,n;
   clrscr();
  printf("\n\t enter values for m and n");
  scanf("%d%d",&m,&n);
  if(m%n==0)
    printf("\n\n\t%d is divisable by %d",m,n);
 else
     printf("\n\n\t%d is NOT divisable by %d",m,n);
  getch();
 }
