//program to display product of n natural numbers using for loop

#include<stdio.h>
#include<conio.h>

void main()
{
   int i,n,p=1;
   clrscr();
   printf("\nenter final value");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      printf("\n\t%d",i);
      p=p*i;
    }
    printf("\nproduct=%d",p);
    getch();
}
