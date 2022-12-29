//function without return value with arguments
#include<iostream.h>
#include<conio.h>

void area(float  ,float);//function declaration

void main()
{
   float b,h;
   clrscr();
   cout<<"\nenter values for b and h";
   cin>>b>>h;
   area(b,h);//calling function-actual parameters
  getch();
}
void area(float b,float h)//called function-foramal parameters
{

  cout<<"\narea of triangle="<<0.5*b*h;
}