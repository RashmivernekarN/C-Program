//program to illustrate function overloading in oop
#include<iostream.h>
#include<conio.h>
int a,b,s;//global variable declaration
float x,y;
int add(int ,int );
void add();
void add(float ,float );
void main()
{
	clrscr();
	cout<<"\nEnter 2 integer numbers";
	cin>>a>>b;
	cout<<"\nEnter 2 floating numbers";
	cin>>x>>y;
	s=add(a,b);
	cout<<"\nFirst fun sum"<<s;
	add();
	add(x,y);
	getch();
}

int add(int a,int b)
{
	return(a+b);
}
void add()
{
	cout<<"\n\nWe are in addition function";
}
void add(float x,float y)
{
	cout<<"\n\nfloat numbers sum="<<(x+y);
}