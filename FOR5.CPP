/*prg to print 50 to 100 nums which are div by 5 using for loop */
#include<iostream.h>
#include<conio.h>

void main()
 {
  int i;
  clrscr();
  for(i=50;i<=100;i++)
  {
  if(i%5==0)
  cout<<"\n\t"<<i;
  }
  getch();
 }