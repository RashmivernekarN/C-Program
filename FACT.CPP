//program to find factorial of given number.
#include<iostream.h>
#include<conio.h>

void main()
{
   int i,num,fact=1;
   clrscr();
   cout<<"enter any number to find factorial";
   cin>>num;
   for(i=1;i<=num;i++)
      {
	 fact=fact*i;
      }
   cout<<"\t\tfactorial of "<<num<<"is "<<fact;
   getch();
}
