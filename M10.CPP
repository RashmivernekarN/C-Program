//program to find the sum and average of three numbers
#include <iostream.h>
#include <conio.h>
void main()
{
int a,b,c;
float sum,avg;
clrscr();
cout<<"\n enter three numbers:";
cin>>a>>b>>c;
sum=a+b+c;
avg=sum/3;
cout<<"\n sum="<<sum;
cout<<"\n Average"<<avg;
getch();
}
