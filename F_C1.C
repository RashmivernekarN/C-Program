#include<stdio.h>
#include<conio.h>
int a,b,big;
int sample();

void main()
{
   clrscr();
   printf("\n\tbig=%d",sample(a,b));
   getch();
}
int sample()
{
   printf("\nenter vcalues for a and b");
  scanf("%d%d",&a,&b);
   big=a>b?a:b;
  return(big);
}

