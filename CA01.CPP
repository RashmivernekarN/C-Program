//porgarm to find area of triangle
#include<stdio.h>
#include<conio.h>
void main()
{
   float area,b,h;
   clrscr();
   printf("\n enter base and height");
   scanf("%f%f",&b,&h);
   area=0.5*b*h;
   printf("\n area of triangle=%f", area);
   getch();

   }