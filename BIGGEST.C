#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf(" enter 3 numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
if(a>c)
printf(" %d is a big",a);
else
printf(" % d is a big",c);
else if(b>c)
printf(" %d is a big",b);
else
printf("%d is a big",c);
getch();
}
