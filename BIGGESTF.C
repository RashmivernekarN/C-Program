#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,c,d;
clrscr();
printf("Enter any four numbers");
scanf("%d%d%d%d",&a,&b,&c,&d);
 if(a>b&&a>c&&a>d)
 {
 printf("%d is biggest",a);
 }
 else if(b>c&&b>d)
 {
 printf("%d is biggest",b);
 }
else if(c>d)
{
printf("%d is biggest",c);
}
else
{
printf("%d is biggest",d);
}


getch();
}