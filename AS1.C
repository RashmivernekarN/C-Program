#include<stdio.h>
#include<conio.h>
float b,l,a;
void area();

void main()
{
   clrscr();
   area();
   getch();
}


void area()
{
   printf("\n\tenter length breadth of rectangle");
   scanf("%f%f",&b,&l);
   a=b*l;
   printf("\n\tarea of rect=%f",a);
}



