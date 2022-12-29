  /*prg to  read a matrix of order 3x3 and transpose the same*/
  #include<stdio.h>
  #include<conio.h>
  void main()
    {
     int a[3][3],r,c;
     clrscr();
     printf("\n Enter the elements of the matrix");
     for(r=0;r<3;r++)
       {
       for(c=0;c<3;c++)
	 {
	  scanf("%d",&a[r][c]);
	 }
       }
     printf("\n Tranpose of the matrix are: \n");
     for(r=0;r<3;r++)
       {
       for(c=0;c<3;c++)
	 {
	  printf("\t%d",a[c][r]);
	 }
	 printf("\n");
       }

    getch();
  }