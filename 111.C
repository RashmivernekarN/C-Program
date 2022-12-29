/*prg to print Hello message N no of times using while loop*/
#include<stdio.h>
#include<conio.h>
 void main()
  {
     int i=1,n;
     clrscr();
     printf("\n Enter the limit");
     scanf("%d",&n);
     while(i<=n)
      {
       printf("\t Hello");
       i++;
      }
     getch();
  }
