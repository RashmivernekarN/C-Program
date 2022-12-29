/*prg to find biggest of three numbers
using sub program*/
#include<stdio.h>
#include<conio.h>
int biggest(int,int,int);//prototype declaration
void main()
 { int a,b,c,lar;
   clrscr();
   printf("\n Enter any three nums");
   scanf("%d%d%d",&a,&b,&c);
   lar=biggest(a,b,c);
   printf("\n Biggest of 3 nos=%d",lar);
   getch(); }
  int biggest(int x,int y,int z)
  {if(x>y)
    if(x>z)
      return(x);
     else
      return(z);
   else if(y>z)
      return(y);     else      return(z);  }
