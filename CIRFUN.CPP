//program to calculate area of circle uing function

#include<stdio.h>
#include<conio.h>

void area(float r);
void main()
{
  float r1;
  clrscr();
  printf("\n\tenter rad of circle");
  scanf("%f",&r1);
  area(r1);
  getch();
}
void area(float r)
{
   printf("\narea of circle=%f",(3.142*r*r));
}