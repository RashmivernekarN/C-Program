  /*prg to demonstrate if-else-if*/
  #include<stdio.h>
  #include<conio.h>
  void main()
    { int n;
      clrscr();
      printf("\n Enter any no [between 1-12]");
      scanf("%d",&n);
      if(n==1)
	 printf("\n Jan");
      else if(n==2)
	 printf("\n Feb");
      else if(n==12)
	 printf("\n Dec");
      else
	 printf("\n Invalid month no");
      getch();
    }