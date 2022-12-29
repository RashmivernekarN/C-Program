  /*prg to find the biggest of two numbers using sub program*/
  #include<stdio.h>
  #include<conio.h>
  int big(int,int);//prototype declaration
  void main()
    {
      int a,b,lar;//local variables
      clrscr();
      printf("\n Enter two numbers");
      scanf("%d%d",&a,&b);
      lar=big(a,b); //calling function
      printf("\n  Biggest  of two nums=%d",lar);
      getch();

    }
    int big(int x,int y)  //called function
      {
	if(x>y)
	  return(x);
	else
	  return(y);
      }