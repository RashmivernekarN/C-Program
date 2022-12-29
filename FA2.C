//factorial of given num using fun

#include<stdio.h>
#include<conio.h>
void factorial(int  );
int i,fact=1;

void main()
{
    int n;
    clrscr();
    printf("\nenter number to caluculate factorial");
    scanf("%d",&n);
    factorial(n);
    getch();
}
void factorial(int x)
{
      for(i=1;i<=x;i++)
	{
	    fact=fact*i;
	 }
	 printf("factorial of %d is %d",x,fact);
 }
