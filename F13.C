/*prg to find the sum of 1 to N even and odd nums
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
    { int i,se,so;
      for(i=1,se=0,so=0;i<=x;i++)
       {
	 if(i%2==0)
	   se=se+i;
	 else
	   so=so+i;
       }
      printf("\n sum of 1 to N even nums=%d",se);
      printf("\n sum of 1 to N odd nums=%d",so);
     getch();
    }