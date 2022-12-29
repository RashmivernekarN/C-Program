  /*program to read a matrix of order 3x3 and find the sum of
  primary diagonal elements*/
  #include<stdio.h>
  #include<conio.h>
  void main()
    {
      int a[3][3],r,c,s=0;
      clrscr();
      printf("\n Enter the elements");
      for(r=0;r<3;r++)
	{
	  for(c=0;c<3;c++)
	    {
	      scanf("%d",&a[r][c]);
	    }
	}
      //compute sum
      for(r=0;r<3;r++)
	{
	  for(c=0;c<3;c++)
	    {
	     if(r==c)
	     {
	      s=s+a[r][c];
	     }
	    }
	}
      printf("\n sum of primary diagonal elements =%d",s);

      getch();
    }