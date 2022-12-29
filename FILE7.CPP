//simple interest
#include<iostream.h>
#include<conio.h>

void main()
{
   float p,t,r,si;
   clrscr();
   cout<<"\nenter principle amount";
   cin>>p;
   cout<<"\nenter rate of interest";
   cin>>r;
   cout<<"\nenter time";
   cin>>t;
   //cin>>p>>t>>r;
   si=(p*t*r)/100;
   cout<<"\n\tp="<<p<<"\n\tt="<<t<<"\n\tr="<<r<<"\n\tsi="<<si;
   getch();
}