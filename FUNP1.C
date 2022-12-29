//biggest of 2 numbers using function
#include<stdio.h>
#include<conio.h>

void big(int ,int );
void main()
{
   int p,q;
   clrscr();
   printf("\nenter any 2 integer values");
   scanf("%d%d",&p,&q);
   big(p,q);
   getch();
}

void big(int a,int b)
{
   if(a>b)
      printf("\n\t%d is big",a);
   else
     printf("\n\t%d is big",b);
}