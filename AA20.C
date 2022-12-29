//prg to read a matrix of order 3X3 and print the odd elements
 #include<stdio.h>
 #include<conio.h>
 void main()
   {
     int i,j,a[10][10];
     clrscr();
     printf("\n Enter the  elements of the matrix 3x3 order \n");
     for(i=0;i<3;i++)
       {
       for(j=0;j<3;j++)
	 {
	  scanf("%d",&a[i][j]);
	 }
       }
     printf("\n Entered odd elements are \n");
     for(i=0;i<3;i++)
       {
       for(j=0;j<3;j++)
	 {
	  if(a[i][j]%2!=0)
	  {
	  printf("\t %d",a[i][j]);
	  }
	 }
	  printf("\n");
       }
     getch();
   }




