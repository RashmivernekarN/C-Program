/* prg to find simple interest using sub function*/
#include<iostream.h>
#include<conio.h>
float simple(float,float,float);
int main()
 {
  float p,t,r,si;
  clrscr();
  cout<<"Enter p t r values";
  cin>>p>>t>>r;
  si=simple(p,t,r);
  cout<<"\n Simple interest="<<si;
  getch();
 }
 float simple(float x,float y,float z)
   {
       float a;
       a=(x*y*z)/100;
       return(a);
   }
