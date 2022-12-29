//To find biggest of 2numbers(using conditional operators)
#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;
   clrscr();
   printf("\n\tentar 2 integers");
   scanf("%d%d",&a,&b);
   (a>b)? printf("\n\t%d is big",a): printf("\n\t%d is big",b);
    getch();
}