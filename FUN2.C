/*prg to find biggest of two numbers
using sub program*/
#include<stdio.h>
#include<conio.h>
void main()
 { int big(int,int);
   int a,b,lar;
   clrscr();
   printf("\n Enter any two nums");
   scanf("%d%d",&a,&b);
   lar=big(a,b);
   printf("\n Biggest no=%d",lar);
   getch();
  }
  int big(int x,int y)
  {
   if(x>y)
      return(x);
   else
     return(y);
  }
