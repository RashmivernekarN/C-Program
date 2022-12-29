/*prg to find the sum of 1 to N nums
using  arguments but no return value*/
#include<stdio.h>
#include<conio.h>
void sum(int); //prototype declaration
void main()
  {  int n;
     clrscr();
     printf("\n Enter any num");
     scanf("%d",&n);
     sum(n);
  }
  void sum(int x)
    { int i,s;
      for(i=1,s=0;i<=x;i++)
       {
	 s=s+i;
       }
      printf("\n sum of 1 to N nums=%d",s);
     getch();
    }



