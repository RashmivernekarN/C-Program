#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,temp;
clrscr();
printf("enter value of a and b\n");
scanf("%d%d",&a,&b);
printf("\n before swapping a=%d \t b=%d\n",a,b);
temp=a;
a=b;
b=temp;
printf("\n after swapping a=%d \t b=%d\n",a,b);
getch();
}