/* prg to find sum of digit using while loop*/
#include<iostream.h>
#include<conio.h>
void main()
{
int n,temp,digit,sum=0;
clrscr();
cout<<"\n enter any num";
cin>>n;
while(n>0)
{
digit=n%10;
sum=sum+digit;
n=n/10;
}
cout<<"\n sum of digits="<<sum;
getch();
}