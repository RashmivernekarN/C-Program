/*prg to  read N array elements and find the sum of all elements*/
#include<stdio.h>
#include<conio.h>
 void main()
  {
     int a[50],i,n,sum=0;
     clrscr();
     printf("\n Enter the size of an array");
     scanf("%d",&n);
     printf("\n Enter the elements of array");
     for(i=0;i<n;i++)
       {
	 scanf("%d",&a[i]);
       }
     printf("\n Entered elements of the array");
     for(i=0;i<n;i++)
       {
	 sum=sum+a[i];
       }
    printf("\n sum of all elements=%d",sum);
     getch();
  }