/*prg to find sum of two numbers using sub program*/
#include <iostream.h>
#include <conio.h>
int sum(int,int);//prototype declaration
void main()
{
  int a,b,s;
  clrscr();
  cout<<"\n Enter two nums";
  cin>>a>>b;  //actual variables
  s=sum(a,b);//function call
  cout<<"\n sum of two nums="<<s;
  getch();
}
 int sum(int x,int y) //formal variables
  {
    int z;
    z=x+y;
    return(z);//returns value to function main
  }
