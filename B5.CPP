/*//program to find biggest of two no's using if.
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a=7;
if(a%2==0)
printf("\n\n\n A is Even",a);
if(a%2!=0)
printf("\n\n\nA is Odd:=%d",a);
getch();
} */

//program to find biggest of two no's using if else.
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b;
printf("\nEnter the value of A:");
scanf("%d",&a);
if(a%2==0)
printf("\n\n\n A is Even",a);
//if(a%2!=0)
else
printf("\n\n\nNumber is Odd:=%d",a);
getch();
}
