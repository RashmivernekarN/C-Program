/*prg to find area of a traingle using sub program*/
#include<stdio.h>
#include<conio.h>
float area(float,float);//prototype declaration
void main()
 {
   float ar,h,b;
   clrscr();
   printf("\n Enter the base and height");
   scanf("%f%f",&b,&h);
   ar=area(b,h);
   printf("\n Area of a traingle=%f",ar);
   getch();
  }
 float area(float b,float h)
  {
   float area1;
   area1=0.5*b*h;
   return(area1);
  }