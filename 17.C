/*prg to find simple interest */
#include<stdio.h>
#include<conio.h>
void main()
 {
   float p=5000,t=5,r=3.5,si=0;
   clrscr();
//   printf("\n Enter p t r values");
//   scanf("%f%f%f",&p,&t,&r);
   si=(p*t*r)/100;
   printf("\n simple interest=%f",si);
   getch();
 }