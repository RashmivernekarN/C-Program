/*prg to read a matrix of order 3x3 and print the same*/
#include<iostream.h>
#include<conio.h>
int main()
  {
    int a[3][3],i,j;
    clrscr();
    cout<<"\n Enter the array elements";
    for(i=0;i<3;i++)
     {
      for(j=0;j<3;j++)
	{
	  cin>>a[i][j];
	}
     }
    cout<<"\n Entered array elements are: \n ";
    for(i=0;i<3;i++)
     {
      for(j=0;j<3;j++)
	{
	  cout<<"\t"<<a[i][j];
	}
	cout<<"\n";
     }
    getch();
 }