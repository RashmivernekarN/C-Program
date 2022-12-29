//program to check whether m is divisable by n or not

#include<iostream.h>
#include<conio.h>

void main()
{
   int m,n;
   clrscr();
   cout<<"\nenter values for m and n";
   cin>>m>>n;
   if(m%n==0)
      cout<<"\n\t"<<m<<"is divisable by "<<n;
   else
      cout<<"\n\t"<<m<<"is NOT divisable by"<<n ;
  getch();
}