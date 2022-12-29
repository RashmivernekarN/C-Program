#include<stdio.h>
#include<conio.h>
float circle(float );
float cir(float );
void main()
{
   float r;
   clrscr();
   printf("\n\tenter radious");
   scanf("%f",&r);
   printf("\narea=%f",circle(r));
   printf("\ncir=%f",cir(r));
   getch();
}
float circle(float x)
{
   return(3.142*x*x);
}
float cir(float x)
{
   return(2*3.142*x);
}


