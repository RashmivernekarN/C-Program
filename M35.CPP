/* prg to read a  num and find sum of odd and even nos*/
#include<iostream.h>
#include<conio.h>
void main()
{int n,i=1,sume=0,sumo=0;
clrscr();
cout<<"\n enter any num";
cin>>n;
while(i<=n)
  {
    if(i%2==0)
      {
      sume=sume+i;
      }
    else
      {
      sumo=sumo+i;
      }
      i++;
  } cout<<"\n sum of even nos="<<sume;
cout<<"\n sum of odd nos="<<sumo;     getch();}