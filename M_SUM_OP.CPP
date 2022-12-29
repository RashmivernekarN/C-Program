//sum of two matrices
#include<iostream.h>
#include<conio.h>
class sample
{
	int m,n,a[10][10],b[10][10],c[10][10],i,j;
 public: void read()
	{
	cout<<"\n enter the row and column size ";
	cin>>m>>n;
	if(m==n)
	{
	cout<<"\n enter the elements of the matrix a ";
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
	cin>>a[i][j];
	}
	}
	cout<<"\n enter the matrix b";
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
	cin>>b[i][j];
	}
	}
	else
	{
	cout<<"\n square matrix cant be formed ";
	}
	}
      void operator +(sample ,sample);
 };
 void sample::operator +(sample x)
	{
		for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
	c[i][j]=x.a[i][j]+x.b[i][j];
	}
	}
	}
	void print()
	{
	cout<<"\n sum of both the matrix are \n  ";
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
	cout<<"\t"<<c[i][j];
	}
	cout<<"\n";
	}
	}
void main()
{
  sample s;
  clrscr();
  s.read();
  +(s);
  s.print();
  getch();
}



getch();
}
