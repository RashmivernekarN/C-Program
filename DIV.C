#include<stdio.h>
#include<conio.h>
int main()
{
int i=1;
clrscr();

for(i=1;i<=100;i++)
{
if(i%5==0 && i%7==0)
{
printf("\n \t %d",i);
}
}
getch();
}