/*prg to read 5 numbers and print them in reverse order*/
#include <iostream.h>
#include <conio.h>
void main()
{
  int a[5],i;
  clrscr();
  cout<<"\n Enter any 5 elements";
  for(i=0;i<5;i++)
    {
      cin>>a[i];
    }
  cout<<"\n Reversed 5 elements are \n";
  for(i=4;i>=0;i--)
    {
      cout<<"\t"<<a[i]<<endl;
    }
   getch(); }
