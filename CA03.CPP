//program to find area triangle when three sides are given
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float area, a,b,c,s;
clrscr();
printf("\n enter values of 3 sides");
scanf("%f%f%f",&a,&b,&c);
s=(a*b*c)/2;
area =sqrt(s*(s-a)*(s-b)*(s-c));
printf("\n area of the triangle=%f",area);
getch();
}