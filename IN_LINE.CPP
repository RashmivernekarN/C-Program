//illustrate inline function
#include<iostream.h>
#include<conio.h>
inline int big(int a,int b)
{
	return(a>b?a:b);
}
void main()
{
	int x,y,z;
	clrscr();
	cout<<"\nEnter x,y values";
	cin>>x>>y;
	z=big(x,y);
	cout<<"\nbig="<<z;
getch();
}