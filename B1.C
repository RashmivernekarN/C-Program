//prg to demonstrate pointer
#include<stdio.h>
#include<conio.h>
void main()
{
int x,*p,*p2;
clrscr();
x=25
p=&x
p2=&p;
printf("\n x value=%d",x);
printf("\n address of x=%d",p);
printf("\n address of p=%d",p2);
printf("\n adderss of p2=%d",&p2);
getch();
}