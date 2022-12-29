//to perform arithmatic operation

#include<stdio.h>
#include<conio.h>

void main()
{
   double a,b,sum,diff,p,q;
   clrscr();
   printf("\n\tenter values for a and b");
   scanf("%lf%lf",&a,&b);
   sum=a+b;
   diff=a-b;
   p=a*b;
   q=a/b;
   printf("\n\tARITHMATIC OPERATION\n\ta=%lf\n\tb=%lf",a,b);
   printf("\n\tsum=%lf\n\tdifference=%lf\n\tproduct=%lf\n\tque=%lf\n\t",sum,diff,p,q);
   getch();
}
