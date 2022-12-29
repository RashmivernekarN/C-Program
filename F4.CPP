//prg to find factorial of a given num using functions
#include<iostream.h>
#include<conio.h>
int fact(int);
void main()
  {
    int f,n;
    clrscr();
    cout<<"\n Enter any num";
    cin>>n;
    f=fact(n);
    cout<<"\n Factorial of a given num="<<f;
    getch();
   }
   int fact(int x)
   {
    int i,f=1;
    for(i=1;i<=x;i++)
     {
       f=f*i;
     }
    return(f);
   }