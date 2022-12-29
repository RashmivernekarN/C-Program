//area and circumference

#include<iostream.h>
#include<conio.h>

void main()
{
   float r,ar,cir;
   clrscr();
   cout<<"\n\tenter value for r";
   cin>>r;
   ar=3.142*r*r;
   cir=2*3.142*r;
   cout<<"\n\tr="<<r<<"\n\tarea="<<ar<<"\n\tcircumference="<<cir;
   getch();
}
