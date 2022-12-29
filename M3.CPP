//prg to perform basic arithmetic operator
#include<iostream.h>
#include<conio.h>
void main()
  {
    float a,b;
    clrscr();
    cout<<"Enter two nums";
    cin>>a>>b;
    float sum=a+b;
    float sub=a-b;
    float prod=a*b;
    float div=a/b;
    cout<<"\n sum="<<sum;
    cout<<"\n subtraction="<<sub;
    cout<<"\n product="<<prod;
    cout<<"\n division="<<div;
    getch();
  }