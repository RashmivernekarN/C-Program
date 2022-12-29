//sum of even numbers up to n

#include<stdio.h>
#include<conio.h>

void main()
{
   int i,n,sum=0;
   clrscr();
   printf("\nenter final value");
   scanf("%d",&n);
   printf("\n\teven numbers up to %d are\n",n);
   i=2;
   while(i<=n)
   {
      printf("\n\t%d",i);
      sum=sum+i;
      i=i+2;
   }
   printf("\nsum=%d",sum);
   getch();
}
