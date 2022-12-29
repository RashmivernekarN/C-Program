  /*prg to find biggest of two nums using simple if*/
  #include<stdio.h>
  #include<conio.h>
  void main()
    {
      int a,b;
      clrscr();
      printf("\n Enter any two nums");
      scanf("%d%d",&a,&b);
      if(a>b)
	{
	  printf("\n %d is big",a);
	}
      if(b>a)
	{
	  printf("\n %d is big",b);
	}
	getch();

    }