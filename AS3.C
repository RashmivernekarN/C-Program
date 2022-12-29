#include<stdio.h>
#include<conio.h>
float simple();
float p,t,r,si;
void main()
{
   clrscr();
   printf("\nsimple interest=%f",simple());
   getch();
}
float simple()
{
   printf("\nenter values for p t r");
   scanf("%f%f%f",&p,&t,&r);
   si=(p*t*r)/100;
   return(si);
}
