#include<stdio.h>
#include<conio.h>

void main()
{
   int i,n;
   clrscr();
   printf("\n\tnumbers from 200 to 300 whiuch are divisable by 5 are\n\t");
   i=200;
   n=300;
   do
   {
      if(i%5==0)
	printf("%d\t",i);
      i++;
    }
    while(i<=n);
    getch();
}
