/*prg to calculate simple interest using sub program*/
#include<stdio.h>
#include<conio.h>
float simple(float,float,float);//prototype declaration
void main()
 {
   float si,p,t,r;
   clrscr();
   printf("\n Enter p t r values");
   scanf("%f%f%f",&p,&t,&r);
   si=simple(p,t,r);          //p t r are actual parameters
   printf("\n simple interest=%f",si);
   getch();
  }
 float simple(float x,float y,float z) //x y z are formal parameters
  {
   float si;
   si=(x*y*z)/100;
   return(si);
  }