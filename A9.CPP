/*prg to read a matrix of order 3x3 and find sum of all elements*/
#include<iostream.h>
#include<conio.h>
int main()
  {
    int a[3][3],i,j,sum=0;
    clrscr();
    cout<<"\n Enter the array elements";
    for(i=0;i<3;i++)
     {
      for(j=0;j<3;j++)
	{
	  cin>>a[i][j];
	}
     }

    for(i=0;i<3;i++)
     {
      for(j=0;j<3;j++)
	{
	  sum=sum+a[i][j];
	}
	cout<<"\n";
     }
     cout<<"\n sum of all elements are "<<sum;
    getch();
 }