
/* program to swap two numbers*/
#include<stdio.h>
#include<conio.h>
 void main()
{
 int a,b;
 clrscr();
 printf("\n enter two numbers");
 scanf("%d%d",&a,&b);
 printf("\n before swapping a=%d\t b=%d", a,b");
 a=a+b;
 b=a-b;
 a=a-b;
 printf("\n after swapping a=%d\tb=%d",a,b");
 getch();
}