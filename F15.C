/*prg to check whether given num is an armstrong no  or not
using  arguments but no return value*/
#include<stdio.h>
#include<conio.h>
void arm(int); //prototype declaration
void main()
  {  int n;
     clrscr();
     printf("\n Enter any num");
     scanf("%d",&n);
     arm(n);
  }
  void arm(int x)
    { int temp,d,am=0;
      temp=x;
      while(x>0)
       {
	 d=x%10;
	 am=am+(d*d*d);
	 x=x/10;
       }
       if(temp==am)
	 printf("\n Given num=%d is an armstrong  no",temp);
       else
	 printf("\n Given num=%d is not an armstrong  no",temp);
     getch();
    }