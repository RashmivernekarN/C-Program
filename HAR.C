#include<stdio.h>
#include<conio.h>
struct school
{
int roll;
char name[25];
char adress[25];
int weight;
};
void main()
{
int i;
struct school stu[3];
clrscr();
for(i=0;i<3;i++)
{
printf("\n enter roll no");
scanf("%d",&stu[i].roll);
printf("\n enter name");
scanf("%s",stu[i].name);
printf("\n enter adress");
scanf("%s",stu[i].adress);
printf( "\n enter weight in kgs");
scanf("%d",&stu[i].weight);
}
printf("\n the student details are:");
printf("\n roll no\t name\t adress\t weight");
for(i=0;i<3;i++)
{
printf("\n%d\t\t%s\t\t%s\t\t%d",stu[i],roll.stu[i],name,stu[i],adress);
}
getch();
}