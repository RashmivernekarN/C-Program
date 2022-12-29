#include<iostream.h>
#include<conio.h>
float tri(float x,float y);
void cir(float z);
void square();
void main ()
{
   float b,h,r,A;
   clrscr();
   cout<<"Enter breadth & height of triangle";
   cin>>b>>h;
   A=tri(b,h);
   cout<<"\nArea of triangle="<<A;
   cout<<"\n enter radius of the circle";
   cin>>r;
   cir(r);
   square();
   getch();
}
float tri(float x,float y)
{
   float p;
   p=0.5*x*y;
   return(p);
}
void cir(float z)
{
   float q;
   q=3.142*z*z;
   cout<<"\n area of circle"<<q;
}
void square()
{
  float s,m;
  cout<<"\n enter side of the squae";
  cin>>s;
  m=s*s;
  cout<<"\n area of square="<<m;
}