//to swap 2 variables
#include<stdio.h>
#include<conio.h>    
void main()
{
   int a,b,t;
   clrscr();
   printf("\n\tenter 2 numbers");
   scanf("%d%d",&a,&b);
   printf("\n\tBEFORE SWAPPING THE VALUES ARE\n");
   printf("\n\ta=%d\n\tb=%d\n",a,b);
   t=a;
   a=b;
   b=t;
   printf("\n\tATFER SWAPPING THE VALUES ARE\n");
   printf("\n\ta=%d\n\tb=%d\n",a,b);
   getch();
}
