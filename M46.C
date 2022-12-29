  /*prg to  find the sum of two arrays*/
  #include<stdio.h>
  #include<conio.h>
  void main()
    {
     int a[50],b[50],s[50],i,n;
     clrscr();
     printf("\n Enter the size of array");
     scanf("%d",&n);
     printf("\n Enter elements for Array A");
     for(i=0;i<n;i++)
       {
	 scanf("%d",&a[i]);
       }
     printf("\n Enter elements for Array B");
     for(i=0;i<n;i++)
       {
	 scanf("%d",&b[i]);
       }

    //find sum of both array elements
     for(i=0;i<n;i++)
       {
	 s[i]=a[i]+b[i];
       }
     printf("\n sum of both array elements are");
     for(i=0;i<n;i++)
       {
	 printf("\n %d",s[i]);
       }
    getch();
  }