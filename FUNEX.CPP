//program to illustrate function (to find area of rectangle)
#include<iostream.h>
#include<conio.h>

void rectangle(int  ,int  );
void main()
{
   int b,h;
   clrscr();
   cout<<"\nenter values for b and h";
   cin>>b>>h;
   rectangle(b,h);
   getch();
}
void rectangle(int b ,int h)
{
  cout<<"area of rectangle="<<b*h;
}
