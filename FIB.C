//program to display fibonacci series
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,f1=-1,f2=1,f3;
clrscr();
printf("\nenter final value");
scanf("%d",&n);
printf("\n Fibonacci series:\n");
for(i=1;i<=n;i++)
{
f3=f1+f2;
printf("\n \t %d",f3);
f1=f2;
f2=f3;
}
getch();
}