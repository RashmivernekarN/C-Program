#include<iostream.h>
#include<conio.h>
void repchar();
void repchar(char );
void repchar(char ,int );
void main()
{
	char x;
	int n;
	clrscr();
	cout<<"\nEnter any character ";
	cin>>x;
	cout<<"\nEnter number of times ";
	cin>>n;
	cout<<"first call\n";
	repchar();
cout<<"second call\n";
	repchar(x);
	cout<<"third call\n";
	repchar(x,n);
	getch();
}
void repchar()
{
	for(int i=0;i<45;i++)
       {	cout<<"\t *"; }
      // cout<<"\n";
}
void repchar( char ch)
{
	for(int i=0;i<45;i++)
	{
	   cout<<"\t"<<ch;
	}
	cout<<"\n";
}
void repchar(char ch, int n1)
{
	for(int i=1;i<=n1;i++)
	{
	   cout<<"\t"<<ch;
	}
}

