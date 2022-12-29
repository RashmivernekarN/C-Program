///biggets of 3 numbers

#include<iostream.h>
#include<conio.h>

void main()
{
  int a,b,c;
  clrscr();
  cout<<"\n\tenter 3 integers";
  cin>>a>>b>>c;
  if(a>b&&a>c)
    cout<<"\n\t"<<a<<" is big";
  else if(b>a&&b>c)
    cout<<"\n\t"<<b<<"is big";
  else if(c>a&&c>b)
     cout<<"\n\t"<<c<<"is big";
   else
      cout<<"not possible to say which is big";
      getch();
}