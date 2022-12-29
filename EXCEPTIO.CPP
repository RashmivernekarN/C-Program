//program illustrate exception handling mechanism
#include<iostream.h>
#include<conio.h>

void main()
{
   int a,b;
   cout<<"\n\tenter values for a and b";
   cin>>a>>b;
   int x=a-b;
   try
   {
       if(x!=0)
       {
	  cout<<"\n\tresult(a/x)="<<a/x;
       }
       else
       {
	   throw(x);//there is an exception,throw int object
       }
   }
   catch(int i)//catch the exception
   {
	 cout<<"\n\texception caught:x="<<x;
   }
   cout<<"\n\tEND";
   getch();
}