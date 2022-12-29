//prg to print nums 1 to 100 nos which are div by 3 and 5
#include <iostream.h>
#include <conio.h>
void main()
{
  int i=1;
  clrscr();
  while(i<=100)
    {
      if(i%3==0 && i%5==0)
       cout<<"\t"<<i<<endl;
       i++;
    }

  getch();
}