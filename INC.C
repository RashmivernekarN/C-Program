/* prg to demonstrate increment operator */
#include<stdio.h>
#include<conio.h>
void main()
{
int i=10,j=20;
clrscr();
printf("\n before incrementing i=%d \t j=%d",i,j);
printf("\n after incrementing i=%d",i++);
printf("\n i=%d",i);
printf("\n j=%d",++j);
getch();
}