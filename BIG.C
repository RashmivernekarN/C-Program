#include<stdio.h>
#include<conio.h>
int main()
{
int a[50],i,n,big;
clrscr();
printf("\n enter the size of array");
scanf("%d",&n);
printf("\n enter the %d elements",n);
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
printf("\n biggest element=%d",big);
getch();
}