  /*prg to check whether the given num is even or odd using simple if*/
  #include<stdio.h>
  #include<conio.h>
  void main()
    {
      int n;
      clrscr();
      printf("\n Enter any num");
      scanf("%d",&n);
      if(n%2==0)
	{
	  printf("\n %d is even no",n);
	}
      if(n%2!=0)
	{
	  printf("\n %d is odd no",n);
	}
	getch();
    }
