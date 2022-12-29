//sum of single dimensional array elements

#include<stdio.h>
#include<conio.h>

void main()
{
    int a[50],i,sum=0,n;
    clrscr();
    printf("enter size of the array");
    scanf("%d",&n);
    printf("\nenter array elements");
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    printf("the array elements are\n");
    for(i=0;i<n;i++)
    {
	printf("\t\t%d\n",a[i]);
	sum=sum+a[i];
    }
    printf("\n\t\tsum=%d",sum);
    getch();
}