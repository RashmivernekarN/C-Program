//fun without return value without argument

#include<iostream.h>
#include<conio.h>
int a,b,sum;
void addition( );

void main()
{
   clrscr();
   addition();
   getch();
}

void addition()
{
   cout<<"\n\tenter 2 int";
   cin>>a>>b;
   cout<<"\n\tsum="<<a+b;
}