// prg to find factorial of a given num using functions
#include<iostream.h>
#include<conio.h>
int fact(int);
void main()
{
int f,n;
clrscr();
cout<<"\n enter any num";
cin>>n;
cout<<"\n factorial of a given num="<<f;
getch();
}
int fact(int x)
{
int i,f=1;
for(i=1;i<=x;i++)
{
f=f*1;
}
return(f);
}
