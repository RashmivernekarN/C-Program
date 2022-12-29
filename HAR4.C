#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
int id;
char name[30];
float percantage;
};
int main()
{
int i;
struct student record[2];
clrscr();

//1st student record
record[0].id=1;
strcpy(record[0].name,"raju");
record[0].percantage=86.5;

//2nd student record
record[1].id=2;
strcpy(record[1].name,"taniya");
record[1].percantage=90.5;

//3rd student record
record[2].id=3;
strcpy(record[2].name,"nikhil");
record[2].percantage=81.5;

for(i=0;i<3;i++)
{
printf("records of student:%d\n",i+1);
printf("id is:%d \n",record[i].name);
printf("name is:%s\n",record[i].name);
printf("percantage is:%f \n\n",record[i].percantage);
}
getch();
}

