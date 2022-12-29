//prg to print nums 1 to 100 nos which are div by 5
#include <iostream.h>
#include <conio.h>
void main()
{
  int i=1;
  clrscr();
  cout<<"\n 1 to 100 nums which are div by 5 are:\n";
  while(i<=100)
    {
      if(i%5==0)
       {
       cout<<"\t"<<i<<endl;
       }
       i++;
    }

  getch();
}