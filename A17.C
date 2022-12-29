/*prg to read a matrix of order 3X3 and find the biggest element of a
 given matrix*/
 #include<stdio.h>
 #include<conio.h>
 void main()
   {
     int i,j,a[3][3],big;
     clrscr();
     printf("\n Enter the array elements\n");
     for(i=0;i<3;i++)
       {
       for(j=0;j<3;j++)
	 {
	  scanf("%d",&a[i][j]);
	 }
       }
     big=a[0][0];
     for(i=0;i<3;i++)
       {
       for(j=0;j<3;j++)
	 {
	  if(a[i][j]>big)
	    {
	      big=a[i][j];
	    }

	 }
       }
       printf("\n Biggest element of the matrix=%d",big);
	getch();
	}
