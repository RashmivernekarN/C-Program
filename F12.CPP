/* prg to find biggest of three nums using sub function*/
#include<iostream.h>
#include<conio.h>
int big(int,int,int);
int main()
 {
  int a,b,c,lar;
  clrscr();
  cout<<"Enter three nums";
  cin>>a>>b>>c;
  lar=big(a,b,c);
  cout<<"\n Biggest num="<<lar;
  getch();
 }
 int big(int x,int y,int z)
   {
     if(x>y)
       if(x>z)
	  return(x);
       else
	  return(z);
    else if(y>z)
	  return(y);
       else
	  return(z);

   }
