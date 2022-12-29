/*program to check whether a number is divisible by 7 or not*/

#include<stdio.h>
#include<conio.h>

void main()
{
int n;
clrscr();
printf("Enter any number to know whether it's divisible by 7 or not");
scanf("%d",&n);
if(n%7==0)
{
printf("%d is DIVISIBLE by 7",n);
}
else
{
printf("%d is NOT DIVISIBLE by 7",n);
}

getch();
}