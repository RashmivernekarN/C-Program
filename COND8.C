//check the entered number is even or odd

#include<stdio.h>
#include<conio.h>

void main()
{
   int num;
   clrscr();
   printf("\nenter any number");
   scanf("%d",&num);
   (num%2==0)?printf("\n\n\t%d is EVEN",num):printf("\n\n\t%d is ODD",num);
   getch();
}
