//prg to print nums 1 to 20 even nos
#include <iostream.h>
#include <conio.h>
void main()
{
  int i=2;
  clrscr();
  cout<<"\n First 10 even nums are\n";
  while(i<=20)
    {
       cout<<"\t"<<i;
       i=i+2;
    }
  getch();
}