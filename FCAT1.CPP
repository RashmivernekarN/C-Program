//function with return value with arguments
#include<iostream.h>
#include<conio.h>

float area(float  ,float);//function declaration

void main()
{
   float b,h,ar;
   clrscr();
   cout<<"\nenter values for b and h";
   cin>>b>>h;
   ar=area(b,h);//calling function-actual parameters
   cout<<"\n\tarea of triangle="<<ar;
   getch();
}
float area(float b,float h)//called function-foramal parameters
{
  return(0.5*b*h);
}