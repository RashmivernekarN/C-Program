//check whether the entered number is even odd

#include<iostream.h>
#include<conio.h>

void main()
{
  int num;
  clrscr();
  cout<<"\n\tenter any number";
  cin>>num;
  if(num%2==0)
     cout<<endl<<"\tEVEN";
  else
	 cout<<endl<<"\tODD";
  getch();
}

