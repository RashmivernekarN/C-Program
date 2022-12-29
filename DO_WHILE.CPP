//product of odd numbers up to n
#include<iostream.h>
#include<conio.h>

void main()
{
 long int i,n,p=1;
  clrscr();
  cout<<"\n\nenter final value";
  cin>>n;
  i=1;
  do
  {
     cout<<"\n\t"<<i;
     p=p*i;
     i=i+2;
  }while(i<=n);
  cout<<"\n\tproduct of odd numbers="<<p;
  getch();
}
