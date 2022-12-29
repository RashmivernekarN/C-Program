/*prg to find largest of twon no using sub program*/
#include<iostream.h>
#include<conio.h>
int lar(int a,int b);
void main()
 {
   int x,y,z;
   clrscr();
   cout<<"Enter x,y ";
   cin>>x>>y;
   z=lar(x,y);
   cout<<"\nLargest of two numbers "<<z;
   getch();
  }
 int lar(int a,int b)
  {
      int c;
      c=(a>b)?a:b;
      return(c);
   }