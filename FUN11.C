/*prg to find sum of digits using sub program*/
#include<stdio.h>
#include<conio.h>
int sum(int);
void main()
 {
   int n,s,temp;
   clrscr();
   printf("\n Enter any no");
   scanf("%d",&n);
   temp=n;
   s=sum(n);
   printf("\n Given no %d is ",temp);
   printf("\n sum of digits= %d",s);
   getch();
  }
 int sum(int x)
  {
      int s=0,d;
      while(x>0)
      {
       d=x%10;
       s=s+d;
       x=x/10;
      }
      return(s);
}