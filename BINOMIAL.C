#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,c,x,y;
clrscr();
printf("Enter any four numbers\n");
scanf("%d%d%d%d",&a,&b,&c,&x);
y=a*x*x+b*x+c;
printf("y=(ax+b)^2=%d\nfor\ta=%d\n\tb=%d\n\tc=%d\n\tx=%d\n",y,a,b,c,x);
getch();
}
