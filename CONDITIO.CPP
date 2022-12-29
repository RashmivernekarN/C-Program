//program to find biggest of 2 num using conditional operator

#include<iostream.h>
#include<conio.h>

void main()
{
   int a,b,big;
   clrscr();
   cout<<"\n enter values for a and b";
   cin>>a>>b;
   big=(a>b)?a:b;
   cout<<"\n\ta="<<a<<"\n\tb="<<b<<"\n\tbig="<<big;
   getch();
}