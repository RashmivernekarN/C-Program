  /*prg to check whether the given num is +ve  or -ve using  if-else*/
  #include<stdio.h>
  #include<conio.h>
  void main()
    {
      int n;
      clrscr();
      printf("\n Enter any num");
      scanf("%d",&n);
      if(n>0)
	{
	  printf("\n %d is +ve no",n);
	}
      else
	{
	  printf("\n %d is -ve no",n);
	}
	getch();
    }