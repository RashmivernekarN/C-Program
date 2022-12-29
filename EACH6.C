/*prg to read n array elements and find the biggest element of an array*/
#include<stdio.h>
#include<conio.h>
void main()
  {
    int a[50],i,n,big;
    clrscr();
    printf("\nenter the limit");
    scanf("%d",&n);
    printf("\n enter %d elements ",n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    big=a[0];
    for(i=1;i<n;i++)
    {
    if(a[i]>big)
    big=a[i];
    }
    printf("\t biggest num=%d",big);

    getch();
  }