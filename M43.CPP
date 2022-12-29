/*prg to read N array elements and find the sum of all elements*/
#include <iostream.h>
#include <conio.h>
void main()
{ int a[50],i,s=0,n;
  clrscr();
  cout<<"\n Enter the size of an array";
  cin>>n;
  cout<<"\n Enter the array elements";
  for(i=0;i<n;i++)
    {
      cin>>a[i];
    }
// compute sum
  for(i=0;i<n;i++)
    {
      s=s+a[i];
    }
  cout<<"\n sum of all elements="<<s;
   getch(); }