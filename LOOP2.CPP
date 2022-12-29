//prog to display even numbers up to n
#include<iostream.h>
#include<conio.h>
void main()
{
   int i,n;
   clrscr();
   cout<<"\n\nenter final value";
   cin>>n;
   i=2;
   while(i<=n)
   {
      cout<<"\t\t"<<i<<"\n";
      i=i+2;
   }
   getch();
}
