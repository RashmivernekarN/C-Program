//program to accept single dimensional array elements and display the same
#include<stdio.h>
#include<conio.h>
void main()
{
  int a[5],i;
  clrscr();
  printf("\nenter array elements\n");
  for(i=0;i<5;i++)
  scanf("%d",&a[i]);
  printf("\narray elements are\n");
  for(i=0;i<5;i++)
  printf("\t\t[%d]=%d\n",i,a[i]);
  getch();
}