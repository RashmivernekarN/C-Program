//sum of even numbers up to 10
#include<stdio.h>
#include<conio.h>

void main()
{
  int i,s=0;
  clrscr();
  printf("\n\teven numbers up to 10");
  for(i=2;i<=10;i=i+2)
  {
    printf("\n\t%d",i);
    s=s+i;
  }
  printf("\n\tSUM OF EVEN NUMBERS UP TO 10 ARE= %d",s);
  getch();
}
