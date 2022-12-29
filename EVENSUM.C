 #include<stdio.h>
#include<conio.h>

void main()
{
   int i,n,sum=0;
   clrscr();
   printf("\nEVEN NUMBERS ARE\n");
   for(i=2;i<=10;i++)
   {
      if(i%2==0)
      {
	 sum=sum+i;
	 printf("\t\t%d\n",i);
       }
   }
   printf("\t\n sum=%d",sum);
   getch();
}