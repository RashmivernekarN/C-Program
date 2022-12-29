//program to illustrate  conditional operator

#include<iostream.h>
#include<conio.h>

void main()
{
   int a,b,big;
   clrscr();
   cout<<"\nenter values for a and b";
   cin>>a>>b;
   big=(a>b)?a:b;
   cout<<"\n\ta="<<a<<"\n\tb="<<b<<"\n\tbig="<<big;
   getch();
}
