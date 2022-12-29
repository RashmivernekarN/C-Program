/* prg to find factorial of a num using sub function*/
#include<iostream.h>
#include<conio.h>
int fact(int);
int main()
 {
  int f,n;
  clrscr();
  cout<<"Enter any num";
  cin>>n;
  f=fact(n);
  cout<<"\n Factorial of a given num="<<f;
  getch();
 }
 int fact(int x)
   {
       int i=1,f=1;
       while(i<=x)
	 {
	   f=f*i;
	   i++;
	 }
       return(f);
   }
