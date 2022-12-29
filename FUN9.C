/*prg to reverse a given no sub program*/
#include<stdio.h>
#include<conio.h>
long int reverse(long int);
void main()
 { long int n,r,temp;
   clrscr();
   printf("\n Enter any no");
   scanf("%ld",&n);
   temp=n;
   r=reverse(n);
   printf("\n Given no is %ld",temp);
   printf("\n Reversed no is=%ld",r);
   getch();
  }
 long int reverse(long int x)
  {  long int r=0,d;
      while(x>0)
      {
       d=x%10;
       r=(r*10)+d;       x=x/10;      }      return(r);  }