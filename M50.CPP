/*prg to find biggest of three numbers using sub program*/
#include <iostream.h>
#include <conio.h>
  int big(int,int,int);//prototype declaration
void main()
{
  int a,b,c,lar;
  clrscr();
  cout<<"\n Enter three nums";
  cin>>a>>b>>c;  //actual variables
  lar=big(a,b,c);//function call
  cout<<"\n Biggest of three nums="<<lar;
  getch();
}
 int big(int x,int y,int z) //formal variables
  {
    if(x>y)
     if(x>z)
      return(x);//returns value to function main
    else
      return(z);//returns value to function main
   else  if(y>z)
      return(y);//returns value to function main
    else
      return(z);//returns value to function main

  }
