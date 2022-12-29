/*prg to read N array elements and a search key
and check whether search key is present in an array or not*/
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
	 f=1;
	 break;
	 }
    }
  if(f>0)
    cout<<key<<" is found at location"<<i+1;
  else
    cout<<key<<" is not found in the array";
   getch();
 }