/*prg to find the sum of two numbers using sub program
using  arguments but no return value*/
#include<stdio.h>
#include<conio.h>
void sum(int,int); //prototype declaration
void main()
  {
     int a,b,s;
     clrscr();
     printf("\n Enter two nums");
     scanf("%d%d",&a,&b);
     sum(a,b);//function call
  }
  void sum (int x,int y)
    {
     int s;
     s=x+y;
     printf("\n sum of 2 nums=%d",s);
     getch();

    }