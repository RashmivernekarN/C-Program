 //prg to find the sum and subtraction of two arrays
 #include<stdio.h>
 #include<conio.h>
 void main()
   {
     int n,a[20],b[20],sub[20],sum[20],i;
     clrscr();
     printf("\n Enter the limit");
     scanf("%d",&n);
     printf("\n Enter the elements of array A:");
     for(i=0;i<n;i++)
       {
	scanf("%d",&a[i]);

       }
     printf("\n Enter the elements of array B:");
     for(i=0;i<n;i++)
       {
	scanf("%d",&b[i]);

       }

      //find substraction of two arrarys
      for(i=0;i<n;i++)
       {
	sub[i]=a[i]-b[i];
       }
      //find sum of two arrarys
      for(i=0;i<n;i++)
       {
	sum[i]=a[i]+b[i];
       }

     printf("\n The substraction of two arrarys \n");
     for(i=0;i<n;i++)
       {
	printf("\t%d",sub[i]);

       }
     printf("\n The sum of two arrarys \n");
     for(i=0;i<n;i++)
       {
	printf("\t%d",sum[i]);

       }

     getch();
   }
