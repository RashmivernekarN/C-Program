//prg to read N nums and find  the sum of all elements
#include<iostream.h>
#include<conio.h>
void main()
  {
    int a[50],i,n,s=0;
    clrscr();
    cout<<"\n Enter the limit";
    cin>>n;
    cout<<"\n Enter the elements";
    for(i=0;i<n;i++)
      {
       cin>>a[i];
      }
    //compute sum
    for(i=0;i<n;i++)
      {
	s=s+a[i];
      }
    cout<<"\n sum of all elements"<<s;
    getch();
  }