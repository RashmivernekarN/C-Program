//program to illustrate while loop
#include<iostream.h>
#include<conio.h>

void main()
{
  int i,n;
  clrscr();
  cout<<"\n\tenter final value";
  cin>>n;
  cout<<"\n\tEVEN numbersup to "<<n<<" are\n";
  i=1;
  while(i<=n)
  {
      if(i%2==0)
      {
     cout<<"\n\t"<<i;
     }
     i++;
  }

  getch();
  }