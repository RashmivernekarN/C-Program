#include<stdio.h>
#include<conio.h>
struct school
{
int rollno;
char name[25];
char address[25];
float weight;
}school;
void main()
{
struct school;
clrscr();
printf("\n enter the rollno");
scanf("%d",&school.rollno);
printf("\n enter the name");
scanf("%s",school.name);
printf("\n enter the address");
scanf("%s",school.address);
printf("\n enter the weight in kgs");
scanf("%f",school.weight);
printf("\n students details");
printf("\n roll no \t\t\t\t\t name\t\t\t\taddress\t\t\t\tweight");
printf("\n %d\t\t\t\t%s\t\t\t\t%s\t\t\t\t%f",school.rollno,school.name,school.address,school.weight);
getch();
}
