//program to find sum and average of three numbers

#include<iostream.h>
#include<conio.h>

void main()
{
   int a,b,c,sum,avg;
   clrscr();
   cout<<endl<<"\tenter values for a,b and c";
   cin>>a>>b>>c;
   sum=a+b+c;
   avg=sum/3;
   cout<<"\n\ta="<<a;
   cout<<"\n\tb="<<b;
   cout<<"\n\tsum="<<sum;
   cout<<"\n\taverage="<<avg;
   getch();
}