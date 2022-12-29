//prg to find simple interest
#include<iostream.h>
#include<conio.h>
void main()
  {
    float p,t,r,si;
    clrscr();
    cout<<"Enter p t r values";
    cin>>p>>t>>r;
    si=(p*t*r)/100;
    cout<<"\n Simple Interest="<<si;
    getch();
  }