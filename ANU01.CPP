/*// program to find area and perimeter of square.
#include<stdio.h>
#include<conio.h>
void main()
{
int a;
float area,peri;
clrscr();
printf("\n enter the value of a:");
scanf("%d",&a);
area=a*a;
peri=4*a;
printf("\n     area:=%f",area);
printf("\nperimeter:=%f",peri);
getch();
}*/

/*// program to find area and perimeter of rectangle.
#include<stdio.h>
#include<conio.h>
void main()
{
int l,w;
float area,peri;
clrscr();
printf("\n enter the value of l and w:");
scanf("%d%d",&l,&w);
area=l*w;
peri=2*(l+w);
printf("\n     area:=%f",area);
printf("\nperimeter:=%f",peri);
getch();
}*/

/*// program to find area and perimeter of circle.
#include<stdio.h>
#include<conio.h>
void main()
{
int r;
float area,peri;
clrscr();
printf("\n enter the value of r:");
scanf("%d",&r);
area=r*r;
peri=3.142*r*r;
printf("\n     area:=%f",area);
printf("\nperimeter:=%f",peri);
getch();
}*/

// program to find triangle is equilateral,scalane or isoscles.
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("\n enter the value of a,b and c:");
scanf("%d%d%d",&a,&b,&c);
if(a==b && b==c && c==a)
printf("\n triangle is equilateral");
else if(a==b || b==c || c==a)
printf("\n triangle is isoscless");
else
printf("\n triangle is scalane");
getch();
}


