//program to find area of triangle using function

#include<iostream.h>
#include<conio.h>

void triangle(float    ,float  );

void main()
{
   float b,h;
   clrscr();
   cout<<"\nenter base and height";
   cin>>b>>h;
   triangle(b,h);
   getch();
}
void triangle(float x,float y)
{
  cout<<"\narea of triangle is="<<0.5*x*y;
}