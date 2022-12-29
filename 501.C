/*prg to print nums 1 to N even nums using while loop*/
#include<stdio.h>
#include<conio.h>
 void main()
  {
     int i=1,n;
     clrscr();
     printf("\n Enter the limit");
     scanf("%d",&n);
     printf("\n Even nums are:\n");
     while(i<=n)
      {
       if(i%2==0)
       printf("\t %d",i);
       i++;
      }
     getch();
  }
