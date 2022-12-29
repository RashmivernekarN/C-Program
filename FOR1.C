// program to display your name for specified number of times

#include<stdio.h>
#include<conio.h>

void main()
{
   int time,i;
   clrscr();
   printf("\nHOW MANY TIMES YOU WANT TO DISPLAY YOUR NAME\t");
   scanf("%d",&time);
   for(i=0;i<time;i++)
   {
      printf("\n \tKEONICS");
   }
   getch();
}
