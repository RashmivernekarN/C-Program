#include<stdio.h>
#include<conio.h>

int a,b,lar;
void large();
void main()
{
  clrscr();
  large();
  getch();
}

void large()
{
  printf("Enter any two numbers to find the largest one\n");
  scanf("%d%d",&a,&b);
  if(a>b)
   {
     printf("%d is large\n",a);
   }
   else
    printf("%d is large",b);
}
