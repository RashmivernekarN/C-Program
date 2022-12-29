/*program to accept 2 single dimensional array elements and
find their corresponding sum */

#include<stdio.h>
#include<conio.h>

void main()
{
   int a[50],b[50],s[50],i,n;
   clrscr();
   printf("\n\tenter size of array");
   scanf("%d",&n);
   printf("\n\tEnter First Array elements");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   printf("\n\tEnter Second Array elements");
   for(i=0;i<n;i++)
   scanf("%d",&b[i]);
   printf("\n\tA\tB\tSUM\n\t");
   for(i=0;i<n;i++)
   {
       s[i]=a[i]+b[i];
     printf("%d\t%d\t%d\n\t",a[i],b[i],s[i]);
   }
   getch();
}