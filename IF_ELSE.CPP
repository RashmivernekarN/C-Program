//illustration of control statements

#include<iostream.h>
#include<conio.h>

void main()
{
  int age;
  clrscr();
  cout<<"\n\tenter age";
  cin>>age;
  if(age>=18)
     cout<<endl<<"\teligible to vote";
  else
	 cout<<"\n\t not eligible to vote";
  getch();
}
