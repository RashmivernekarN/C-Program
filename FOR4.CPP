//prg to print 1 to 20 even nums using for loop
#include<iostream.h>
#include<conio.h>

void main()
 {
  int i;
  clrscr();
  for(i=1;i<=20;i++)
  {
  if(i%2==0)
   {
    cout<<"\n\t"<<i;
   }
  }

  getch();
 }