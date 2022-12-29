//illustrate function overloading
#include<iostream.h>
#include<conio.h>
int a,b,s;
float x,y;

int addition(int  ,int   );
void addition();
void addition(float  ,float  );

void main()
{
   clrscr();
   cout<<"\n\tenter 2 int nos";
   cin>>a>>b;
   cout<<"\n\n\tenter 2 float nos";
   cin>>x>>y;
   s=addition(a,b);
   cout<<"\n\tfirst fun sum="<<s;
   addition();
   addition(x,y);
   getch();
}
int addition(int a,int b)
{
   return(a+b);
}
void addition()
{
   cout<<"\n\n\twe are in addition function";
}
void addition(float a,float b)
{
    cout<<"\n\n\tsum="<<a+b;
}
