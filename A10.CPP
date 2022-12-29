/*prg to read a matrix of order 3x3 and find sum of even and odd
all elements*/
#include<iostream.h>
#include<conio.h>
int main()
  {
    int a[3][3],i,j,sume=0,sumo=0;
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
	  if(a[i][j]%2==0)
	    sume=sume+a[i][j];
	  else
	    sumo=sumo+a[i][j];
	}
     }
     cout<<"\n sum of even elements are "<<sume;
     cout<<"\n sum of odd elements are "<<sumo;
    getch();
 }