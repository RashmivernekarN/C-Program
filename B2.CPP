/*//program to calculate arithmetic Operations.
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float a=5,b=10,sum,diff,pro,div,per;
sum=a+b;
diff=a-b;
pro=a*b;
div=a/b;
per=sum/2;
printf("\n           Sum of A and B:%0.2f",sum);
printf("\n    Difference of A and B:%0.2f",diff);
printf("\nMultiplication of A and B:%0.2f",pro);
printf("\n      Division of A and B:%0.2f",div);
printf("\n    Percentage of A and B:%0.2f",per);
getch();
} */
//program to calculate arithmetic Operations.
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float a,b,sum,diff,pro,div,per;
printf("\nEnter the value of A and B:");
scanf("%f%f",&a,&b);
sum=a+b;
diff=a-b;
pro=a*b;
div=a/b;
per=sum/2;
printf("\n           Sum of A and B:%0.2f",sum);
printf("\n    Difference of A and B:%0.2f",diff);
printf("\nMultiplication of A and B:%0.2f",pro);
printf("\n      Division of A and B:%0.2f",div);
printf("\n    Percentage of A and B:%0.2f",per);
getch();
}