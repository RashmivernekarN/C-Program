//function with return value without arguments
#include<iostream.h>
#include<conio.h>
   float b,h,ar;//global declaration
 float area();//function declaration

void main()
{

   clrscr();
  cout<<"\narea of triangle="<<area();//calling function
  getch();
}
float area()//called function
{
     cout<<"\nenter values for b and h";
   cin>>b>>h;
    ar=0.5*b*h;
    return(ar);
}