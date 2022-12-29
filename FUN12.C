//prg to check whether given num is an amstrong no or not
#include<stdio.h>
#include<conio.h>
int amstrong(int);
void main()
{
int n,am,temp;
printf("\n enter the limit");
scanf("%d",&n);
temp=n;
am=amstrong(n);
if(temp==am)
printf("\n given num=%d is an amstrong num",temp);
else
printf("\n given num=%d is not an amstrong nm",temp);
getch();
}
int amstrong(int x)
{
 int d,am=0;
while(x>0)
{
d=x%10;
am=am+(d*d*d);
x=x/10;
}
return(am);
}
