#include<iostream.h>
#include<conio.h>
struct school
{
int roll;
char name[25];
char address[25];
int weight;
}school;
int main()
{

 struct school;
 clrscr();
     cout<<"\n enter the roll no";
     cin>>school.roll;
     cout<<"\n enter name";
     cin>>",school.name;
     cout<<"\n enter address";
     cin>>school.address;
     cout<<"\n enter weight in kgs";
     cin>>school.weight;
cout<<"\n The student details are:";
cout<<"\n Roll NO \t\t Name \t\t Address \t\t Weight";
cout<<"\n school.roll"<<"\t"<<school.name<<"\t"<<school.address<<"\t"<<school.weight;

getch ();
}
