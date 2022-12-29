//illustrate function

#include<stdio.h>
#include<conio.h>

void addition(int a,int b);//function declaration
void main()
{
  int p,q;
  clrscr();
  printf("\n\tenter any 2 integers");
  scanf("%d%d",&p,&q);
  addition(p,q);//calling function(p and q are actual parameters)
  getch();
}
void addition(int a,int b)//called function (a and b are formal parameters)
{
   printf("\n\tsum=%d",a+b);
}