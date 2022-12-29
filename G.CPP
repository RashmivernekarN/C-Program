#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	cout<<"Enter values for a,b,c";
	cin>>a>>b>>c;

	if(a>b && a>c)
	{
		cout<<a<<" is big number";

	}
	else if(b>a && b>c)
	   {
		cout<<b<<" is big number";

	    }
	else
		cout<<c<<" is big number";
	getch();
}