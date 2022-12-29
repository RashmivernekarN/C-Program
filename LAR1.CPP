/*prg to find largest of twon no using sub program*/
#include<iostream.h>
#include<conio.h>
void lar(int a,int b);
void main()
 {
   int x,y,z;
   clrscr();
   cout<<"Enter x,y ";
   cin>>x>>y;
   lar(x,y);
   getch();
  }
 void lar(int a,int b)
  {
	int c;
	c=(a>b)?a:b;
	cout<<"\n Largest of two nu"<<c;
   }