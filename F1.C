//program to find sum of 2 numbers

#include<stdio.h>
#include<conio.h>

void main()
  {
     int a,b,sum;
     clrscr();
     printf("\n\tenter values for a and b");
     scanf("%d%d",&a,&b);
     sum=a+b;
     printf("\n\ta=%d\n\tb=%d\n\tsum=%d",a,b,sum);
     getch();
}