  /*program to read a matrix of order mxn and and print the same*/
  #include<stdio.h>
  #include<conio.h>
  void main()
    {
      int a[10][10],m,n,r,c;
      clrscr();
      printf("\n Enter the row size and column size of the matrix \n");
      scanf("%d%d",&m,&n);
      printf("\n Enter the elements of the matrix \n");
      for(r=0;r<m;r++)
	{
	  for(c=0;c<n;c++)
	    {
	      scanf("%d",&a[r][c]);
	    }
	}
      printf("\n Entered elements of the matrix  are : \n");
      for(r=0;r<m;r++)
	{
	  for(c=0;c<n;c++)
	    {
	      printf("\t%d",a[r][c]);
	    }
	    printf("\n");
	}

      getch();
    }