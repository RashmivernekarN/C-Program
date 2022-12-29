/* prg to find revrse a given num*/
#include<iostream.h>
#include<conio.h>
void main()
{
int n,temp,digit,rev=0;
clrscr();
cout<<"\n enter any num";
cin>>n;
temp+n;
while(n>0)
{
digit=n%10;
rev=(rev*10)+digit;
n=n/10;
}
cout<<"\n given num is="<<temp;
cout<<"\n reversed num is="<<rev;
getch();
}