//display odd up to n  using while

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n;
    clrscr();
    printf("\n\t enter final value");
    scanf("%d",&n);
    printf("\n\tEVEN NUMBERs UP TO %d are\n",n);
    i=2;
    while(i<=n)
    {
       printf("\t%d\n",i);
       i=i+2;
     }
     getch();
}
