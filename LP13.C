//program to display reverse numbers from n

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    clrscr();
    printf("\nenter final value");
    scanf("%d",&n);
    i=1;
    do
    {
       printf("\n\t%d",n);
       n=n-1;
     }while(i<=n);
     getch();
}