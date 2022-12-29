//prg to find biggest of 3 nums using functions
#include<iostream.h>
#include<conio.h>
int big(int,int,int);
void main()
  {
    int a,b,c,lar;
    clrscr();
    cout<<"\n Enter 3 nums";
    cin>>a>>b>>c;
    lar=big(a,b,c);
    cout<<"\n Biggest of 3 nums="<<lar;
    getch();
   }
   int big(int x,int y,int z)
   {

    if(x>y)
    if(x>z)
    return(x);
    else
    return(y);
    else if(y>z)
     return(y);
     else
     return(z);
   }