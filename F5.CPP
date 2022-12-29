/* prg to find area of a rectangle using sub function*/
#include<iostream.h>
#include<conio.h>
float area(float,float);
int main()
 {
  float ar,b,l;
  clrscr();
  cout<<"Enter length and breadth";
  cin>>l>>b;
  ar=area(l,b);
  cout<<"\n Area of rectangle="<<ar;
  getch();
 }
 float area(float x,float y)
   {
       float a;
       a=x*y;
       return(a);
   }
