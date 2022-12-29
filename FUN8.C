/*prg to find sum of N nos using sub program*/
#include<stdio.h>
#include<conio.h>
int sum(int);
void main()
 { int s,n;
   clrscr();
   printf("\n Enter any no");
   scanf("%d",&n);
   s=sum(n);
   printf("\n sum of 1 to N nos=%d",s);
   getch();
  }
 int sum(int x)
  {
      int s=0,i=1;
      while(i<=x)
      {
      s=s+i;
      i++;
      }      return(s);  }