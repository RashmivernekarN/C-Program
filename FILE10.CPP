//program to find smallest of 3 numbers

#include<iostream.h>
#include<conio.h>

void main()
{
   int a,b,c,small;
   clrscr();
   cout<<"\n\tENTER VALUES FOR a,b AND c";
   cin>>a>>b>>c;
   small=(a<b&&a<c)?a:(b<c?b:c);
  cout<<"\n\tsmallest of 3 nums="<<small;
   getch();
}