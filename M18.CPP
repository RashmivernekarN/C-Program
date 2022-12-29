
/*program to check whether given no is +ve or -ve using simple if*/
#include <iostream.h>
#include <conio.h>
void main()
{
 int n;
 clrscr();
 cout<<"\n Enter any no";
 cin>>n;
 if(n>0)
   cout<<"\t"<<n<<" is a  +ve no";
 if(n<0)
   cout<<"\t"<<n<<" is a  -ve no";

 getch();
}