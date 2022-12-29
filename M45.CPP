/*prg to read N array elements and find the biggest elements*/
#include <iostream.h>
#include <conio.h>
void main()
{ int a[50],i,big,n;
  clrscr();
  cout<<"\n Enter the size of an array";
  cin>>n;
  cout<<"\n Enter the array elements";
  for(i=0;i<n;i++)
    {
      cin>>a[i];
    }
// find big
  big=a[0];
  for(i=1;i<n;i++)
    {
      if(a[i]>big)
	 big=a[i];
    }
  cout<<"\n Biggest of all elements="<<big;
   getch();
 }