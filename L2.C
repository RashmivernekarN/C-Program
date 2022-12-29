//do while

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n,p=1;
    clrscr();
    printf("\n enter value for n");
    scanf("%d",&n);
    printf("\nnatural numbers are\n");
    for(i=1;i<=n;i++)
    {
       printf("\n\t%d",i);
       p=p*i;
    }
     printf("\n\tproduct=%d",p);
     getch();
}