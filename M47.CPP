/*prg to read N array elements and a search key
and check how many times key is found*/
#include <iostream.h>
#include <conio.h>
void main()
{
  int a[50],i,key,f=0,n;
  clrscr();
  cout<<"\n Enter the size of an array";
  cin>>n;
  cout<<"\n Enter the array elements";
  for(i=0;i<n;i++)
    {
      cin>>a[i];
    }
  cout<<"\n Enter the search key";
  cin>>key;

  for(i=0;i<n;i++)
    {
      if(a[i]==key)
	 {
	 f++;
	 }
    }
  if(f>0)
    cout<<"\n key is found "<<f<<" times";
  else
    cout<<"\n key is not found";
   getch();
 }