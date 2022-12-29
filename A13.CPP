/*prg to read two matrix of order MXN  and find sum and subtraction of
 both matrix*/
#include<iostream.h>
#include<conio.h>
int main()
  {
    int a[10][10],b[10][10],c[10][10],i,j,m,n;
    clrscr();
    cout<<"\n Enter the maximum row and col size";
    cin>>m>>n;
    cout<<"\n Enter elements for matrix A";
    for(i=0;i<m;i++)
     {
      for(j=0;j<n;j++)
	{
	  cin>>a[i][j];
	}
     }
    cout<<"\n Enter elements for matrix B";
    for(i=0;i<m;i++)
     {
      for(j=0;j<n;j++)
	{
	  cin>>b[i][j];
	}
     }
   //sum
    for(i=0;i<m;i++)
     {
      for(j=0;j<n;j++)
	{
	  c[i][j]=a[i][j]+b[i][j];
	}
     }
    cout<<"\n sum of both matrix \n";
    for(i=0;i<m;i++)
     {
      for(j=0;j<n;j++)
	{
	  cout<<c[i][j]<<"\t";
	}
	cout<<"\n";
     }

   //subtraction
    for(i=0;i<m;i++)
     {
      for(j=0;j<n;j++)
	{
	  c[i][j]=a[i][j]-b[i][j];
	}
     }
    cout<<"\n subtraction of both matrix \n";
    for(i=0;i<m;i++)
     {
      for(j=0;j<n;j++)
	{
	  cout<<c[i][j]<<"\t";
	}
	cout<<"\n";
     }
    getch();
 }