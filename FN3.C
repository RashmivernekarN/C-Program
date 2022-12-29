//prg to find the biggest of three numbers using sub program
#include<stdio.h>
#include<conio.h>
int big(int,int,int); //prototype declaration
void main()
  { int a,b,c,lar;  //local variable
    clrscr();
    printf("\n Enter three nums");
    scanf("%d%d%d",&a,&b,&c);
    lar=big(a,b,c);
    printf("\n Biggest of 3 nums=%d",lar);
    getch();
  }
  int big (int x,int y,int z)         //formal variables
    {if(x>y)
       if(y>z)
	 return (x);
       else
	  return(z);
     else if(y>z)
	 return (y);
       else
	  return(z);
    }