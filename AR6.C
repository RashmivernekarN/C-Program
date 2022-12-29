  /*program to read two matrix of order mxn and and find  the sum
   and subtraction of two matrix*/
  #include<stdio.h>
  #include<conio.h>
  void main()
    {
      int a[10][10],b[10][10],sum[10][10],sub[10][10],m,n,r,c;
      clrscr();
      printf("\n Enter the row size and column size of the matrix \n");
      scanf("%d%d",&m,&n);
      printf("\n Enter the elements of the matrix A: \n");
      for(r=0;r<m;r++)
	{
	  for(c=0;c<n;c++)
	    {
	      scanf("%d",&a[r][c]);
	    }
	}
      printf("\n Enter the elements of the matrix B: \n");
      for(r=0;r<m;r++)
	{
	  for(c=0;c<n;c++)
	    {
	      scanf("%d",&b[r][c]);
	    }
	}

     //compute sum
      for(r=0;r<m;r++)
	{
	  for(c=0;c<n;c++)
	    {
		sum[r][c]=a[r][c]+b[r][c];
	    }
	}
     //compute subtraction
      for(r=0;r<m;r++)
	{
	  for(c=0;c<n;c++)
	    {
		sub[r][c]=a[r][c]-b[r][c];
	    }
	}
     //print sum
     printf("\n sum of both the matrix : \n");
      for(r=0;r<m;r++)
	{
	  for(c=0;c<n;c++)
	    {
		printf("\t %d",sum[r][c]);
	    }
	    printf("\n");
	}

     //print subtraction
     printf("\n subtraction of both the matrix : \n");
      for(r=0;r<m;r++)
	{
	  for(c=0;c<n;c++)
	    {
		printf("\t %d",sub[r][c]);
	    }
	    printf("\n");
	}
      getch();
    }