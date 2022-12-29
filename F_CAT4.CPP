//function without return value without arguments
#include<iostream.h>
#include<conio.h>
   float b,h,ar;//global variable declaration
void area();//function declaration

void main()
{
   clrscr();
  area();//calling function
  getch();
}
void area()//called function
{
     cout<<"\nenter values for b and h";
   cin>>b>>h;
    ar=0.5*b*h;
    cout<<"\narea of triangle="<<ar;
}