#include<iostream.h>
#include<conio.h>

void main()
{
   int a,b,c,x,y;
   clrscr();
   cout<<"enter values for a b c x";
   cin>>a>>b>>c>>x;
   y=a*x*x+b*x+c;
   cout<<"\n\ta="<<a<<"\n\tb="<<b<<"\n\tc="<<c<<"\n\tx="<<x;
   cout<<"\n\n\tresult y="<<y;
   getch();
}