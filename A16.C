/*prg to read a matrix of order 3X3 and a search key and check whether
 search is present or not*/
 #include<stdio.h>
 #include<conio.h>
 void main()
   {
     int i,j,a[3][3],f=0,key;
     clrscr();
     printf("\n Enter the array elements\n");
     for(i=0;i<3;i++)
       {
       for(j=0;j<3;j++)
	 {
	  scanf("%d",&a[i][j]);
	 }
       }
       printf("\n Enter search key");
       scanf("%d",&key);
     for(i=0;i<3;i++)
       {
       for(j=0;j<3;j++)
	 {
	  if(a[i][j]==key)
	    {
		f=1;
		break;
	    }

	 }
       }
       if(f>0)
	 printf("\n key is found ");
       else
	 printf("\n key is not found");
	getch();
	}
