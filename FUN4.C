/*prg to find area of a circle using function*/
#include<stdio.h>
#include<conio.h>
float area(float);//prototype declaration
float pi=3.142;//global varaible
void main()
 {
   float ar,r;
   clrscr();
   printf("\n Enter the radius");
   scanf("%f",&r);
   ar=area(r);
   printf("\n Area of a circle=%f",ar);
   getch();
  }
 float area(float x)
  {
   float ar;
   ar=pi*x*x;
   return(ar);
  }
