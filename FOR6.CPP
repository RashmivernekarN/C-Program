/*program to print multiplication table */
#include<iostream.h>
#include<conio.h>

void main()
 {
  int i,m,n;
  clrscr();
  cout<<"\n enter any num";
  cin>>n;
  for(i=1;i<=10;i++)
  {
  m=i*n;
  cout<<"\n\t"<<n<<"X"<<i<<"="<<m;
  }
  getch();

 }