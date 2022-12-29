//even and odd numbers

#include<iostream.h>
#include<conio.h>
void main()
{
   int a;
   clrscr();
   cout<<"\nenter values for a:";
   cin>>a;
   if(a%2==0)
       cout<<"%d is Even"<<a;
   else
	  cout<<"%d is Odd"<<a;
   getch();
}