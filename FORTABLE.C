//display multiplication table up to 10 using for loop

#include<stdio.h>
#include<conio.h>

void main()
{
  int i,n,result;
  clrscr();
  printf("\n\tenter number to display multiplication table");
  scanf("%d",&n);
  for(i=1;i<=10;i++)
  {
    result=n*i;
    printf("\n\t%dX%d=%d",n,i,result);
  }
  getch();
}