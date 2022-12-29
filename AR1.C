  /*program to read a matrix of order 3x3 and print the same*/
  #include<stdio.h>
  #include<conio.h>
  void main()
    {
      int a[3][3],r,c;
      clrscr();
      printf("\n Enter the elements");
      for(r=0;r<3;r++)
	{
	  for(c=0;c<3;c++)
	    {
	      scanf("%d",&a[r][c]);
	    }
	}
      printf("\n Entered elements of the matrix are:\n");
      for(r=0;r<3;r++)
	{
	  for(c=0;c<3;c++)
	    {
	      printf("\t%d",a[r][c]);
	    }
	    printf("\n");
	}
      getch();
    }