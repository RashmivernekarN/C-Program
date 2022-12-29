/*prg to read 5 array elements and print the same*/
#include <iostream.h>
#include <conio.h>
void main()
{
  int a[5],i;
  clrscr();
  cout<<"\n Enter any 5 array elements";
  for(i=0;i<5;i++)
    {
      cin>>a[i];
    }
  cout<<"\n Entered 5 arrray elements are \n";
  for(i=0;i<5;i++)
    {
      cout<<"\t"<<a[i];
    }
   getch();

 }
