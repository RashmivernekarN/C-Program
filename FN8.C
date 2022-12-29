//prg to find sum of a 1 to N nos using sub program
#include<stdio.h>
#include<conio.h>
int sum(int);//prototype declaration
void main()
  {  int s,n;
    clrscr();
    printf("\n Enter any num");
    scanf("%d",&n);
    s=sum(n);
    printf("\n sum of 1 to N  nos=%d",s);
    getch();
  }
  int sum(int n)         //formal variables
    {	int i=1,s=0;
	while(i<=n)
	  {
	   s=s+i;
	   i++;
	  }
      return(s);     }