//program to illustrate single dimensional array
//accept single dimensional array elements and diaplay the same

#include<stdio.h>
#include<conio.h>

void main()
{
   int a[100],i,n;
   clrscr();
   printf("\n\tenter size of the array");
   scanf("%d",&n);
   printf("\n\tenter array elements");
   for(i=0;i<n;i++)
     {
	scanf("%d",&a[i]);
      }
      printf("\n\tthe array elements are\n");
      for(i=0;i<n;i++)
	 {
	     printf("\n\ta[%d]=%d",i,a[i]);
	 }
	 getch();
}