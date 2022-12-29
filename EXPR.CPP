//evaluate an expression

#include<iostream.h>
#include<conio.h>

void main()
{
   long int a,b,c,x,y;
   clrscr();
   cout<<"\n\tenter values for a b c  x";
   cin>>a>>b>>c>>x;
   y=a*x*x+b*x+c;
   cout<<"\n\ta="<<a<<"\n\tb="<<b<<"\n\tc="<<c<<"\n\tx="<<x<<"\n\ty="<<y;
   getch();
}
