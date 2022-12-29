//to perform arithmatic operation

#include<stdio.h>
#include<conio.h>

void main()
{
   int r,a,b,sum,diff,p,q;
   clrscr();
   printf("\n\tenter values for a and b");
   scanf("%d%d",&a,&b);
   sum=a+b;
   diff=a-b;
   p=a*b;
   q=a/b;
   r=a%b;
   printf("\n\tARITHMATIC OPERATION\n\ta=%d\n\tb=%d",a,b);
printf("\n\tsum=%d\n\tdifference=%d\n\tproduct=%d\n\tque=%d\n\trem=%d",
sum,diff,p,q,r);
   getch();
}
