//factorial of a given number using do while)

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n,fact=1;
    clrscr();
    printf("\n\tenter any integer to calculate factorial");
    scanf("%d",&n);
    i=1;
    do
    {
       fact=fact*i;
       i++;
     }while(i<=n);
     printf("\n\tFACTORIAL OF %d IS  %d",n,fact);
     getch();
}

