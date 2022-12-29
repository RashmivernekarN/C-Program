  /*program to read a matrix of order 3x3 and find the sum
  of even and odd  elements*/
  #include<stdio.h>
  #include<conio.h>
  void main()
    {
      int a[3][3],r,c,se=0,so=0;
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
	       if(a[r][c]%2==0)
		{
		se=se+a[r][c];
		}
	       else
		{
		so=so+a[r][c];
		}
	    }
	}
      printf("\n sum of even elements =%d",se);
      printf("\n sum of odd elements =%d",se);
      getch();
    }