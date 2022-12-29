//proGram to find biggest of 3 num using conditional operator

#include<iostream.h>
#include<conio.h>

void main()
{
   int a,b,c,big;
   clrscr();
   cout<<"\n enter values for a,b and c";
   cin>>a>>b>>c;
   big=(a>b&&a>c)?a:(b>c?b:c);
   cout<<"\n\ta="<<a<<"\n\tb="<<b<<"\n\tc="<<c<<"\n\tbig="<<big;
   getch();
}