//prg to calculate simple interest using sub program
#include<stdio.h>
#include<conio.h>
float simple(float,float,float); //prototype declaration
void main()
  {
    float p,t,r,si;  //local variable
    clrscr();
    printf("\n Enter p t r values");
    scanf("%f%f%f",&p,&t,&r);
    si=simple(p,t,r);
    printf("\n Simple interst=%f",si);
    getch();
  }
  float simple (float p,float t,float r)         //formal variables
    {
      float s;
      s=(p*t*r)/100;
      return(s);
     }
