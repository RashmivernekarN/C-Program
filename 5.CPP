#include<iostream.h>
#include<conio.h>
struct school
{
int roll;
char name[25];
char address[25];
int weight;
};
int main()
{
 int i;
 struct school stu[3];
 clrscr();
  for(i=0;i<3;i++)
  {
     cout<<"\n enter the roll no";
     cin>>stu[i].roll;
     cout<<"\n enter name";
     cin>>stu[i].name;
     cout<<"\n enter address";
     cin>>stu[i].address;
     cout<<"\n enter weight in kgs";
     cin>>stu[i].weight;
  }
cout<<"\n The student details are:";
cout<<"\n Roll NO \t Name \t Address \t Weight";
for(i=0;i<3;i++)
{
cout<<stu[i].roll<<"\t"<<stu[i].name<<"\t"<<stu[i].address<<"\t"<<stu[i].weight;
}
getch ();
}
