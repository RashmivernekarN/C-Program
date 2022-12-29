/*prg to reverse a given
using  arguments but no return value*/
#include<stdio.h>
#include<conio.h>
void reverse(int); //prototype declaration
void main()
  {  int n;
     clrscr();
     printf("\n Enter any num");
     scanf("%d",&n);
     reverse(n);
  }
  void reverse(int x)
    { int temp,d,r=0;
      temp=x;
      while(x>0)
       {
	 d=x%10;
	 r=(r*10)+d;
	 x=x/10;
       }
      printf("\n Given num=%d",temp);
      printf("\n Reversed num=%d",r);
     getch();
    }