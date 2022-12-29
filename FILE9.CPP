//program to find biggest of 2 numbers

#include<iostream.h>
#include<conio.h>

void main()
{
   int a,b;
   clrscr();
   cout<<"\n\tENTER VALUES FOR a AND b";
   cin>>a>>b;
   (a>b)?cout<<"\n\t"<<a<<"is big":cout<<"\n\t"<<b<<"is big";
   getch();
}