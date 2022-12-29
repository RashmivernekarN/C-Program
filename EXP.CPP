#include<iostream.h>
#include<conio.h>

void main()
{
   int a=10,b=5,c=5,result;
    clrscr();
   try
   {
     result=a/(b-c);
   }
   catch(ArithmeticException e)
   {
      cout<<"divide by zero"<<e;
   }
   result=a/(b+c);
   cout<<"\n\tresult="<<result;
   getch();
}
