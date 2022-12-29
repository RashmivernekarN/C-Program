/* prg to reverse a num using sub function*/
#include<iostream.h>
#include<conio.h>
int reverse(int);
int main()
 {
  int r,n,temp;
  clrscr();
  cout<<"Enter any num";
  cin>>n;
  temp=n;
  r=reverse(n);
  cout<<"\n given num="<<temp;
  cout<<"\n Reversed num="<<r;
  getch();
 }
 int reverse(int x)
   {
       int d,r=0;
       while(x>0)
	 {
	   d=x%10;
	   r=(r*10)+d;
	   x=x/10;

	 }
       return(r);
   }
