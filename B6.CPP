/*//program to find +ve / -ve no's using if.
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a=-7;
if(a>0)
printf("\n\n\n A is +ve",a);
if(a<0)
printf("\n\n\nA is -ve:=%d",a);
getch();
} */

//program to find biggest of two no's using if else.
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a;
printf("\nEnter the value of A:");
scanf("%d",&a);
if(a>0)
printf("\n\n\n A is +ve",a);
//if(a<0)
else
printf("\n\n\nNumber is -ve:=%d",a);
getch();
}
