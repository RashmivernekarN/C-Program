//prg to find biggest of two nums using sub function
#include<stdio.h>
#include<conio.h>
int main()
  {
    int sum(int,int);// prototype declaration
    int a,b,s;
    clrscr();
    printf("\n Enter two nums");
    scanf("%d%d",&a,&b);
    s=sum(a,b); //function call
    printf("\n sum of two nums=%d",s);
    getch();
  }
  int sum(int x,int y)
    {
      int s;
      s=(x+y);
      return(s);

    }