//program to add two numbers using function
//function without argument without return value)
#include<iostream.h>
#include<conio.h>
int addition();

void main()
{
   clrscr();
   cout<<"\n\n\tsum="<<addition();
   getch();
}
int addition()
{
   int a=10,b=30;
   return(a+b);
}
