//program to find display n natural numbers

#include<iostream.h>
#include<conio.h>

void main()
{
   int i,n;
   clrscr();
   cout<<"\nenter value for n";
   cin>>n;
   i=1;
   while(i<=n)
   {
      cout<<endl<<"\t"<<i;
      i++;
   }

   getch();
}

