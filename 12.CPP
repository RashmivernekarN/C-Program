#include<iostream.h>
#include<conio.h>
int lar(int ,int );
void main ()
{
   int x,y,z;
   clrscr();
   cout<<"Enter x,y values";
   cin>>x>>y;
  z=lar(x,y);
   cout<<"\nLargest of two nu "<<z;
   getch();
}
int lar(int a,int b)
{
   int c;
   c=(a>b?a:b);
   return(c);
}