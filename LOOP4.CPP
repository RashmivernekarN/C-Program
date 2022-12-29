//prog to find factorial of a given number
#include<iostream.h>
#include<conio.h>
void main()

{
 long int i,n,fact=1;
   clrscr();
   cout<<"\n\nenter final value";
   cin>>n;
   i=1;
   while(i<=n)
   {

     fact=fact*i;
      i++;
   }
   cout<<"\n\t\tfactorial of"<<n<<"  is ="<<fact;
   getch();
}
