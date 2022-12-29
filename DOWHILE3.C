//program to display even numbers from 50 to 100
#include<stdio.h>
#include<conio.h>

void main()
{
  int i,n;
  clrscr();
  i=50;
  n=100;
  printf("\nEVEN NUMBERS FROM 50 TO 100 ARE\n");
  do
  {
      printf("\t%d",i);
      i=i+2;
  }while(i<=n);
  getch();
}
