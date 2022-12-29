/*// program to find area and perimeter of square.
#include<stdio.h>
#include<conio.h>
void main()
{
int a;
float area,peri;
clrscr();
printf("enter the value of a:");
scanf("%d",&a);
area=a*a;
peri=4*a;
printf("\n      area:=%f",area);
printf("\n perimeter:=%f",peri);
getch();
}*/

// program to find area and perimeter of rectangle.
#include<stdio.h>
#include<conio.h>
void main()
{
int l,w;
float area,peri;
clrscr();
printf("enter the value of length and width:");
scanf("%d%d",&l,&w);
area=l*w;
peri=2*(l+w);
printf("\n      area:=%f",area);
printf("\n perimeter:=%f",peri);
getch();
}

